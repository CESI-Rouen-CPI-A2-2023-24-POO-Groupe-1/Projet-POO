#include "mEMPLOYE.h"
#include "DataBase.h"
#include "mADDRESS.h"

using namespace System;
using namespace System::Data;

Employes^ EMPLOYES::add(Employes^ employes)
{
    // add to database
    DataBase^ db = gcnew DataBase();
    int id = db->executeToInt("INSERT INTO employes (employes_nom, employes_prenom, employes_naissance, id_adresse) VALUES ('" + employes->getFirstName() + "', '" + employes->getLastName() + "', '" + employes->getHired().ToString() + "', '" + employes->getHome_address()->getId() + "'); SELECT SCOPE_IDENTITY();");
    Employes^ c = gcnew Employes(id, employes->getFirstName(), employes->getLastName(), employes->getHired(), employes->getHome_address(), employes->getSuperior());
    return c;
}

void EMPLOYES::edit(Employes^ employes)
{
	DataBase^ db = gcnew DataBase();
	db->execute("UPDATE employes SET EMPLOYES_NOM = '" + employes->getFirstName() + "', EMPLOYES_PRENOM = '" + employes->getLastName() + "', EMPLOYES_EMBAUCHE = '" + employes->getHired().ToString() + "', ID_ADRESSE = '" + employes->getHome_address()->getId() + "' WHERE ID_EMPLOYES = '" + employes->getId() + "'");
}

void EMPLOYES::remove(Employes^ employes){
    int idEmploye = employes->getId();
    DataBase^ db = gcnew DataBase();

    // Recherche des enregistrements qui font référence à l'employé
    DataSet^ dsReferences = db->executeToDataSet("SELECT * FROM employes WHERE id_employes_1 = '" + idEmploye + "'");
    DataTable^ dtReferences = dsReferences->Tables[0];

    if (dtReferences->Rows->Count > 0) {
        // Mise à jour des références vers NULL
        db->execute("UPDATE employes SET id_employes_1 = NULL WHERE id_employes_1 = '" + idEmploye + "'");
    }

    // Suppression de l'employé lui-même
    db->execute("DELETE FROM employes WHERE id_employes = '" + idEmploye + "'");
}






//{
//    int idEmploye = employes->getId();
//    DataBase^ db = gcnew DataBase();
//    DataSet^ dsReferences = db->executeToDataSet("SELECT * FROM employes WHERE id_employes_1 = '" + idEmploye + "'");
//    DataTable^ dtReferences = dsReferences->Tables[0];
//
//    if (dtReferences->Rows->Count > 0){
//        db->execute("UPDATE employes SET id_employes_1 = NULL WHERE id_employes_1 = '" + idEmploye + "'");
//        db->execute("DELETE FROM employes WHERE id_employes = '" + idEmploye + "'");
//    }
//    else {
//        db->execute("DELETE FROM employes WHERE id_employes = '" + idEmploye + "'");
//    }
//}
//
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
            dr["id_adresse"] != DBNull::Value &&
            dr["id_employes_1"] != DBNull::Value)
        {
            Employes^ c = gcnew Employes(Convert::ToInt32(dr["id_employes"]),
                dr["employes_nom"]->ToString(),
                dr["employes_prenom"]->ToString(),
                Convert::ToDateTime(dr["employes_embauche"]),
                ADDRESS::get(Convert::ToInt32(dr["id_adresse"])),
                EMPLOYES::get(Convert::ToInt32(dr["id_employes_1"])));
            return c;
        }
        else {
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