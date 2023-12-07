#include "Address.h"

using namespace System;

// ----------------------------------------------
// Constructors / Destructors
// ----------------------------------------------

Address::Address()
{
	this->id = 0;
	this->country = "";
	this->zip_code = "";
	this->city = "";
	this->road_name = "";
	this->road_number = "";
	this->apartment_number = "";
}

Address::Address(String^ country, String^ zip_code, String^ city, String^ road_name, String^ road_number, String^ apartment_number)
{
	this->id = 0;
	this->country = country;
	this->zip_code = zip_code;
	this->city = city;
	this->road_name = road_name;
	this->road_number = road_number;
	this->apartment_number = apartment_number;
}


Address::Address(int id, String^ country, String^ zip_code, String^ city, String^ road_name, String^ road_number, String^ apartment_number)
{
	this->id = id;
	this->country = country;
	this->zip_code = zip_code;
	this->city = city;
	this->road_name = road_name;
	this->road_number = road_number;
	this->apartment_number = apartment_number;
}

Address::Address(Address^ address)
{
	this->id = address->id;
	this->country = address->country;
	this->zip_code = address->zip_code;
	this->city = address->city;
	this->road_name = address->road_name;
	this->road_number = address->road_number;
	this->apartment_number = address->apartment_number;
}

Address::Address(Address^ address, int id)
{
	this->id = id;
	this->country = address->country;
	this->zip_code = address->zip_code;
	this->city = address->city;
	this->road_name = address->road_name;
	this->road_number = address->road_number;
	this->apartment_number = address->apartment_number;
}

Address::~Address()
{
}

// ----------------------------------------------
// Getters
// ----------------------------------------------

int Address::getId()
{
	return this->id;
}

String^ Address::getCountry()
{
	return this->country;
}

String^ Address::getZipCode()
{
	return this->zip_code;
}

String^ Address::getCity()
{
	return this->city;
}

String^ Address::getRoadName()
{
	return this->road_name;
}

String^ Address::getRoadNumber()
{
	return this->road_number;
}

String^ Address::getApartmentNumber()
{
	return this->apartment_number;
}

// ----------------------------------------------
// Setters
// ----------------------------------------------

void Address::setCountry(String^ country)
{
	this->country = country;
}

void Address::setZipCode(String^ zip_code)
{
	this->zip_code = zip_code;
}

void Address::setCity(String^ city)
{
	this->city = city;
}

void Address::setRoadName(String^ road_name)
{
	this->road_name = road_name;
}

void Address::setRoadNumber(String^ road_number)
{
	this->road_number = road_number;
}

void Address::setApartmentNumber(String^ apartment_number)
{
	this->apartment_number = apartment_number;
}
