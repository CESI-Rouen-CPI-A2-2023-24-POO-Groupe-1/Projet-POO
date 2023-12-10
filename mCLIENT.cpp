#include "mCLIENT.h"
#include "DataBase.h"
#include "mADDRESS.h"

using namespace System;
using namespace System::Data;

Client^ CLIENT::add(Client^ client)
{
	DataBase^ db = gcnew DataBase();
	Address^ billing_address = client->getBillingAddress();
	Address^ deliver_address = client->getDeliverAddress();

	// check if addresses have an ID, else insert them into DB
	if (billing_address->getId() == 0)
	{
		billing_address = ADDRESS::add(billing_address);
	}
	if (deliver_address->getId() == 0)
	{
		deliver_address = ADDRESS::add(deliver_address);
	}

	int id = db->executeToInt("INSERT INTO client (client_nom, client_prenom, client_naissance, id_adresse, id_adresse_1) VALUES ('" + client->getFirstName() + "', '" + client->getLastName() + "', '" + client->getBirthdate().ToString() + "', '" + deliver_address->getId() + "', '" + billing_address->getId() + "'); SELECT SCOPE_IDENTITY();");
	Client^ c = gcnew Client(id, client->getFirstName(), client->getLastName(), client->getBirthdate(), deliver_address, billing_address);
	return c;
}

void CLIENT::edit(Client^ client)
{
	DataBase^ db = gcnew DataBase();
	if (client->getBillingAddress()->getId() == 0)
	{
		client->setBillingAddress(ADDRESS::add(client->getBillingAddress()));
	}
	if (client->getDeliverAddress()->getId() == 0)
	{
		client->setDeliverAddress(ADDRESS::add(client->getDeliverAddress()));
	}
	db->execute("UPDATE client SET client_nom = '" + client->getFirstName() + "', client_prenom = '" + client->getLastName() + "', client_naissance = '" + client->getBirthdate().ToString() + "', id_adresse = '" + client->getDeliverAddress()->getId() + "', id_adresse_1 = '" + client->getBillingAddress()->getId() + "' WHERE id_client = '" + client->getId() + "'");
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

DataSet^ CLIENT::search(String^ id, String^ first_name, String^ last_name)
{
	DataBase^ db = gcnew DataBase();
	DataSet^ ds = db->executeToDataSet("SELECT * FROM client WHERE id_client LIKE '%" + id + "%' AND client_nom LIKE '%" + last_name + "%' AND client_prenom LIKE '%" + first_name + "%'");
	return ds;
}
