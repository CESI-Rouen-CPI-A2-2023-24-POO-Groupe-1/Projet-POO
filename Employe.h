#pragma once
#include "Date.h"
#include "Address.h"

using namespace System;

public ref class Employes {
private:
    int id;
    String^ first_name;
    String^ last_name;
    DateTime hired;
    Address^ home_address;
    Employes^ superior;

public:
    Employes::Employes(void);
    Employes::Employes(int id, String^ first_name, String^ last_name, DateTime hired, Address^ home_address, Employes^ superior);
    Employes::Employes(String^ first_name, String^ last_name, DateTime hired, Address^ home_address, Employes^ superior);
    Employes::Employes(Employes^ employes);
    int Employes::getId();
    String^ Employes::getFirstName();
    void Employes::setFirstName(String^ value);
    String^ Employes::getLastName();
    void Employes::setLastName(String^ value);
    DateTime Employes::getHired();
    void Employes::setHired(DateTime value);
    Address^ Employes::getHome_address();
    void Employes::setHome_address(Address^ value);
    Employes^ Employes::getSuperior();
    void Employes::setSuperior(Employes^ value);
};

