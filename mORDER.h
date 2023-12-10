#pragma once
#include "Date.h"
#include "Order.h"
#include "DataBase.h"

public ref class ORDER
{
public:
	Order^ ORDER::add(Order^ order);
	void ORDER::edit(Order order);
	void ORDER::remove(Order order);
	Order^ ORDER::get(int id);
	DataSet^ ORDER::search(String^ reference, DateTime date);
};


