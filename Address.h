#pragma once

using namespace System;

public ref class Address
{
private:
	int id;
	String^ country;
	String^ zip_code;
	String^ city;
	String^ road_name;
	String^ road_number;
	String^ apartment_number;
public:
	Address();
	Address(String^ country, String^ zip_code, String^ city, String^ road_name, String^ road_number, String^ apartment_number);
	Address(int id, String^ country, String^ zip_code, String^ city, String^ road_name, String^ road_number, String^ apartment_number);
    Address(Address^ address);
	Address(Address^ address, int id);
	~Address();
	int getId();
	String^ getCountry();
	String^ getZipCode();
	String^ getCity();
	String^ getRoadName();
	String^ getRoadNumber();
	String^ getApartmentNumber();
	void setCountry(String^ country);
	void setZipCode(String^ zip_code);
	void setCity(String^ city);
	void setRoadName(String^ road_name);
	void setRoadNumber(String^ road_number);
	void setApartmentNumber(String^ apartment_number);
};

