#include "mEMPLOYE.h"
#include "DataBase.h"
#include "mADDRESS.h"

using namespace System;
using namespace System::Data;

Employes^ EMPLOYES::add(Employes^ employes)
{
    // add to database
    DataBase^ db = gcnew DataBase();
    int id = db->executeToInt("INSERT INTO employes (employes_nom, employes_prenom, employes_embauche, employes_superieur, id_adresse) VALUES ('" + employes->getFirstName() + "', '" + employes->getLastName() + "', '" + employes->getHired().ToString() + "', '" + employes->getSuperior() + "', '" + employes->getHome_address()->getId() + "'); SELECT SCOPE_IDENTITY();");
    Employes^ c = gcnew Employes(id, employes->getFirstName(), employes->getLastName(), employes->getHired(), employes->getSuperior(), employes->getHome_address());
    return c;
}

void EMPLOYES::edit(Employes^ employes)
{
	DataBase^ db = gcnew DataBase();
	db->execute("UPDATE employes SET EMPLOYES_NOM = '" + employes->getFirstName() + "', EMPLOYES_PRENOM = '" + employes->getLastName() + "', EMPLOYES_EMBAUCHE = '" + employes->getHired().ToString() + "', EMPLOYES_SUPERIEUR =  '" + employes->getSuperior() + "', ID_ADRESSE = '" + employes->getHome_address()->getId() + "' WHERE ID_EMPLOYES = '" + employes->getId() + "'");
}

void EMPLOYES::remove(Employes^ employes)
{
    DataBase^ db = gcnew DataBase();
    int homeAddressId = employes->getHome_address()->getId();
    db->execute("DELETE FROM employes WHERE id_employes = '" + employes->getId() + "'");
    db->execute("DELETE FROM adresse WHERE id_adresse = '" + homeAddressId + "' AND id_adresse NOT IN (SELECT id_adresse FROM employes)");
}


Employes^ EMPLOYES::get(int id) {
    DataBase^ db = gcnew DataBase();
    DataSet^ ds = db->executeToDataSet("SELECT * FROM employes WHERE id_employes = '" + id + "'");
    DataTable^ dt = ds->Tables[0];

    if (dt->Rows->Count > 0){
        DataRow^ dr = dt->Rows[0];
        if (dr["id_employes"] != DBNull::Value &&
            dr["employes_nom"] != DBNull::Value &&
            dr["employes_prenom"] != DBNull::Value &&
            dr["employes_embauche"] != DBNull::Value &&
            dr["employes_superieur"] != DBNull::Value &&
            dr["id_adresse"] != DBNull::Value)
        {
            Employes^ c = gcnew Employes(Convert::ToInt32(dr["id_employes"]),
                dr["employes_nom"]->ToString(),
                dr["employes_prenom"]->ToString(),
                Convert::ToDateTime(dr["employes_embauche"]),
                Convert::ToInt32(dr["employes_superieur"]),
                ADDRESS::get(Convert::ToInt32(dr["id_adresse"])));
            return c;
        } else {
            return nullptr;
        }
    }
    else{
        return nullptr;
    }
}


DataSet^ EMPLOYES::search(String^ id, String^ first_name, String^ last_name)
{
	DataBase^ db = gcnew DataBase();
	DataSet^ ds = db->executeToDataSet("SELECT * FROM employes WHERE id_employes LIKE '%" + id + "%' AND employes_nom LIKE '%" + last_name + "%' AND employes_prenom LIKE '%" + first_name + "%'");
	return ds;
}