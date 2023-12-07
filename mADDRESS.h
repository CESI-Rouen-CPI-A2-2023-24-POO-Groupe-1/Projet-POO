#pragma once
#include "Mapping.h"

#include "Address.h"

using namespace System;
using namespace System::Data;


ref class ADDRESS : public Mapping
{
public:
	Address^ add(Address address);
	void edit(Address address);
	void remove(Address address);
	Address^ get(int id);
	DataSet search(String^ pays, String^ zip_code, String^ city, String^ road_name, String^ road_number, String^ apartment_number);
};

