#include "Client.h"

Client::Client()
{
}

Client::Client(int id, String^ first_name, String^ last_name, Date^ birthdate, Address^ deliver_address, Address^ billing_address)
{
    this->id = id;
    this->first_name = first_name;
    this->last_name = last_name;
    this->birthdate = birthdate;
    this->deliver_address = deliver_address;
    this->billing_address = billing_address;
}

Client::Client(String^ first_name, String^ last_name, Date^ birthdate, Address^ deliver_address, Address^ billing_address)
{
}

Client::Client(Client^ client)
{
    this->id = client->id;
    this->first_name = client->first_name;
    this->last_name = client->last_name;
    this->birthdate = client->birthdate;
    this->deliver_address = client->deliver_address;
    this->billing_address = client->billing_address;
}

int Client::getId()
{
    return id;
}


String^ Client::getFirstName()
{
    return first_name;
}

void Client::setFirstName(String^ value)
{
    first_name = value;
}

String^ Client::getLastName()
{
    return last_name;
}

void Client::setLastName(String^ value)
{
    last_name = value;
}

Date^ Client::getBirthdate()
{
    return birthdate;
}

void Client::setBirthdate(Date^ value)
{
    birthdate = value;
}

Address^ Client::getDeliverAddress()
{
    return deliver_address;
}

void Client::setDeliverAddress(Address^ value)
{
    deliver_address = value;
}

Address^ Client::getBillingAddress()
{
    return billing_address;
}

void Client::setBillingAddress(Address^ value)
{
    billing_address = value;
}