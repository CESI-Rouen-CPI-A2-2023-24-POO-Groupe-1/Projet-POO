#pragma once
#include "Mapping.h"

#include "Address.h"

using namespace System;
using namespace System::Data;


ref class ADDRESS : public Mapping
{
public:
	static Address^ add(Address^ address);
	static void edit(Address^ address);
	static void remove(Address^ address);
	static Address^ get(int id);
	static DataSet search(String^ pays, String^ zip_code, String^ city, String^ road_name, String^ road_number, String^ apartment_number);
};

