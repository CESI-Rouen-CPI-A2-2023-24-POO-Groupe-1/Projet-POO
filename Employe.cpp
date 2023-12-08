#include "Employe.h"

Employes::Employes()
{
}

Employes::Employes(int id, String^ first_name, String^ last_name, DateTime hired, Address^ home_address, Employes^ superior)
{
    this->id = id;
    this->first_name = first_name;
    this->last_name = last_name;
    this->hired = hired;
    this->home_address = home_address;
    this->superior = superior;
}

Employes::Employes(String^ first_name, String^ last_name, DateTime hired, Address^ home_address, Employes^ superior)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->hired = hired;
    this->home_address = home_address;
    this->superior = superior;

}

Employes::Employes(Employes^ employes)
{
    this->id = employes->id;
    this->first_name = employes->first_name;
    this->last_name = employes->last_name;
    this->hired = employes->hired;
    this->home_address = employes->home_address;
    this->superior = employes->superior;
}

int Employes::getId()
{
    return id;
}


String^ Employes::getFirstName()
{
    return first_name;
}

void Employes::setFirstName(String^ value)
{
    first_name = value;
}

String^ Employes::getLastName()
{
    return last_name;
}

void Employes::setLastName(String^ value)
{
    last_name = value;
}

DateTime Employes::getHired()
{
    return hired;
}

void Employes::setHired(DateTime value)
{
    hired = value;
}

Address^ Employes::getHome_address()
{
    return home_address;
}

void Employes::setHome_address(Address^ value)
{
    home_address = value;
}

Employes^ Employes::getSuperior()
{
    return superior;
}

void Employes::setSuperior(Employes^ value)
{
    superior = value;
}