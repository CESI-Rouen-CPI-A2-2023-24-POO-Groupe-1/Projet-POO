#include "mEMPLOYE.h"
#include "DataBase.h"
#include "mADDRESS.h"

using namespace System;
using namespace System::Data;

Employes^ EMPLOYES::add(Employes^ employes)
{
	// add to database
	DataBase^ db = gcnew DataBase();
	int id = db->executeToInt("INSERT INTO employes (employes_nom, employes_prenom, employes_naissance, id_adresse, id_adresse_1) VALUES ('" + employes->getFirstName() + "', '" + employes->getLastName() + "', '" + employes->getHired().ToString() + "', '" + employes->getHome_address()->getId() + "', '" + employes->getSuperior()->getId() + "'); SELECT SCOPE_IDENTITY();");
	Employes^ c = gcnew Employes(id, employes->getFirstName(), employes->getLastName(), employes->getHired(), employes->getHome_address(), employes->getSuperior());
	return c;
}

void EMPLOYES::edit(Employes^ employes)
{
	DataBase^ db = gcnew DataBase();
	db->execute("UPDATE employes SET employes_nom = '" + employes->getFirstName() + "', employes_prenom = '" + employes->getLastName() + "', employes_naissance = '" + employes->getHired().ToString() + " id_adresse = '" + employes->getHome_address()->getId() + "', id_adresse_1 = '" + employes->getSuperior()->getId() + "' WHERE id_employes = '" + employes->getId() + "'");
}

void EMPLOYES::remove(Employes^ employes)
{
	DataBase^ db = gcnew DataBase();
	db->execute("DELETE FROM employes WHERE id_employes = '" + employes->getId() + "'");
}

Employes^ EMPLOYES::get(int id)
{
	DataBase^ db = gcnew DataBase();
	DataSet^ ds = db->executeToDataSet("SELECT * FROM employes WHERE id_employes = '" + id + "'");
	DataTable^ dt = ds->Tables[0];
	if (dt->Rows->Count > 0)
	{
		DataRow^ dr = dt->Rows[0];
		Employes^ c = gcnew Employes(Convert::ToInt32(dr["id_employes"]), dr["employes_nom"]->ToString(), dr["employes_prenom"]->ToString(), Convert::ToDateTime(dr["employes_embauche"]), ADDRESS::get(Convert::ToInt32(dr["id_adresse"])), EMPLOYES::get(Convert::ToInt32(dr["id_employes_1"])));
		return c;
	}
	else
	{
		return nullptr;
	}
}

DataSet^ EMPLOYES::search(String^ id, String^ first_name, String^ last_name)
{
	DataBase^ db = gcnew DataBase();
	DataSet^ ds = db->executeToDataSet("SELECT * FROM employes WHERE employes_nom LIKE '%" + last_name + "%' AND employes_prenom LIKE '%" + first_name + "%'");
	return ds;
}
