#pragma once
#include "Date.h"
#include "Order.h"
#include "DataBase.h"

public ref class ORDER
{
public:
	static Order^ ORDER::add(Order^ order);
	static void ORDER::edit(Order^ order);
	static void ORDER::remove(Order^ order);
	static Order^ ORDER::get(int id);
	static DataSet^ ORDER::search(String^ reference, DateTime date);
	static DataSet^ ORDER::search(String^ reference, String^ id_client, String^ nom_client, String^ prenom_client);
	static DataSet^ ORDER::search(String^ reference, String^ id_client, String^ nom_client, String^ prenom_client, DateTime date);
};


