#include "Employe.h"

Employes::Employes()
{
}

Employes::Employes(int id, String^ first_name, String^ last_name, DateTime hired, int superior, Address^ home_address)
{
    this->id = id;
    this->first_name = first_name;
    this->last_name = last_name;
    this->hired = hired;
    this->superior = superior;
    this->home_address = home_address;

}

Employes::Employes(String^ first_name, String^ last_name, DateTime hired, int superior, Address^ home_address)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->hired = hired;
    this->superior = superior;
    this->home_address = home_address;


}

Employes::Employes(Employes^ employes)
{
    this->id = employes->id;
    this->first_name = employes->first_name;
    this->last_name = employes->last_name;
    this->hired = employes->hired;
    this->superior = employes->superior;
    this->home_address = employes->home_address;

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

int Employes::getSuperior()
{
    return superior;
}

void Employes::setSuperior(int value)
{
    superior = value;
}

Address^ Employes::getHome_address()
{
    return home_address;
}

void Employes::setHome_address(Address^ value)
{
    home_address = value;
}
