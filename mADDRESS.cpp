#include "mADDRESS.h"
#include "DataBase.h"

using namespace System;

Address ADDRESS::add(Address address)
{
	DataBase^ db = gcnew DataBase();
	
	// check if city exist in table "ville"
	int ville;
	DataSet^ set = db->executeToDataSet("SELECT * FROM ville WHERE ville_nom = '" + address.getCity() + "'");
	if (set->Tables[0]->Rows->Count == 0)
	{
		// check if country exist in table "pays"
		set = db->executeToDataSet("SELECT * FROM pays WHERE pays_nom = '" + address.getCountry() + "'");
		int country;
		if (set->Tables[0]->Rows->Count == 0)
		{
			// add country to table "pays" and return id
			country = db->executeToInt("INSERT INTO pays (pays_nom) VALUES ('" + address.getCountry() + "')");
		} else {
			country = Convert::ToInt32(set->Tables[0]->Rows[0]->ItemArray[0]);
		}
		// add city to table "ville"
		ville = db->executeToInt("INSERT INTO ville (ville_nom, ville_cp, id_pays) VALUES ('" + address.getCity() + "', '" + address.getZipCode() + "', " + country + ")");
	} else {
		ville = Convert::ToInt32(set->Tables[0]->Rows[0]->ItemArray[0]);
	}


	// add address to table "adresse"
	int id = db->executeToInt("INSERT INTO adresse (adresse_rue, adresse_num_rue, adresse_num_appartement, id_ville) VALUES ('" + address.getRoadName() + "', '" + address.getRoadNumber() + "', '" + address.getApartmentNumber() + "', " + ville + ")");

	Address newAddress(%address, id);
}

void ADDRESS::edit(Address address)
{
	DataBase^ db = gcnew DataBase();
	db->execute("UPDATE adresse SET adresse_rue = '" + address.getRoadName() + "', adresse_num_rue = '" + address.getRoadNumber() + "', adresse_num_appartement = '" + address.getApartmentNumber() + "' WHERE id_adresse = " + address.getId());
}

void ADDRESS::remove(Address address)
{
	DataBase^ db = gcnew DataBase();
	db->execute("DELETE FROM adresse WHERE id_adresse = " + address.getId());
}

Address^ ADDRESS::get(int id)
{
	DataBase^ db = gcnew DataBase();
	DataSet^ set = db->executeToDataSet("SELECT * FROM adresse WHERE id_adresse = " + id + "LEFT JOIN ville ON adresse.id_ville = ville.id_ville LEFT JOIN pays ON ville.id_pays = pays.id_pays");
	if (set->Tables[0]->Rows->Count == 0)
	{
		throw gcnew System::Exception("Address not found");
	}
	
	String^ city = set->Tables[0]->Rows[0]->ItemArray[5]->ToString();
	String^ zip_code = set->Tables[0]->Rows[0]->ItemArray[6]->ToString();
	String^ country = set->Tables[0]->Rows[0]->ItemArray[7]->ToString();
	String^ road_name = set->Tables[0]->Rows[0]->ItemArray[1]->ToString();
	String^ road_number = set->Tables[0]->Rows[0]->ItemArray[2]->ToString();
	String^ apartment_number = set->Tables[0]->Rows[0]->ItemArray[3]->ToString();

	Address address(id, country, zip_code, city, road_name, road_number, apartment_number);
	return %address;
}

DataSet ADDRESS::search(String^ pays, String^ zip_code, String^ city, String^ road_name, String^ road_number, String^ apartment_number)
{
	throw gcnew System::NotImplementedException();
}