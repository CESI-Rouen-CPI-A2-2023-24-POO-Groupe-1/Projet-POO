#include "mCLIENT.h"
#include "DataBase.h"
#include "mADDRESS.h"

using namespace System;
using namespace System::Data;

Client^ CLIENT::add(Client^ client)
{
	// add to database
	DataBase^ db = gcnew DataBase();
	int id = db->executeToInt("INSERT INTO client (client_nom, client_prenom, client_naissance, id_adresse, id_adresse_1) VALUES ('" + client->getFirstName() + "', '" + client->getLastName() + "', '" + client->getBirthdate().ToString() + "', '" + client->getBillingAddress()->getId() + "', '" + client->getDeliverAddress()->getId() + "'); SELECT SCOPE_IDENTITY();");
	Client^ c = gcnew Client(id, client->getFirstName(), client->getLastName(), client->getBirthdate(), client->getBillingAddress(), client->getDeliverAddress());
	return c;
}

void CLIENT::edit(Client^ client)
{
	DataBase^ db = gcnew DataBase();
	db->execute("UPDATE client SET client_nom = '" + client->getFirstName() + "', client_prenom = '" + client->getLastName() + "', client_naissance = '" + client->getBirthdate().ToString() + " id_adresse = '" + client->getBillingAddress()->getId() + "', id_adresse_1 = '" + client->getDeliverAddress()->getId() + "' WHERE id_client = '" + client->getId() + "'");
}

void CLIENT::remove(Client^ client)
{
	DataBase^ db = gcnew DataBase();
	db->execute("DELETE FROM client WHERE id_client = '" + client->getId() + "'");
}

Client^ CLIENT::get(int id)
{
	DataBase^ db = gcnew DataBase();
	DataSet^ ds = db->executeToDataSet("SELECT * FROM client WHERE id_client = '" + id + "'");
	DataTable^ dt = ds->Tables[0];
	if (dt->Rows->Count > 0)
	{
		DataRow^ dr = dt->Rows[0];
		Client^ c = gcnew Client(Convert::ToInt32(dr["id_client"]), dr["client_nom"]->ToString(), dr["client_prenom"]->ToString(), Convert::ToDateTime(dr["client_naissance"]), ADDRESS::get(Convert::ToInt32(dr["id_adresse"])), ADDRESS::get(Convert::ToInt32(dr["id_adresse_1"])));
		return c;
	}
	else
	{
		return nullptr;
	}
}

DataSet^ CLIENT::search(String^ first_name, String^ last_name)
{
	DataBase^ db = gcnew DataBase();
	DataSet^ ds = db->executeToDataSet("SELECT * FROM client WHERE client_nom LIKE '%" + last_name + "%' AND client_prenom LIKE '%" + first_name + "%'");
	return ds;
}
