#pragma once
using namespace System;

ref class Client
{
private:
    int id;
    String^ first_name;
    String^ last_name;
    Date birthdate;
    Address deliver_address;
    Address billing_address;

public:
    Client::Client(void);
    Client::Client(int id, String^ first_name, String^ last_name, Date birthdate, Address deliver_address, Address billing_address);
    Client::Client(String^ first_name, String^ last_name, Date birthdate, Address deliver_address, Address billing_address);
    Client::Client(Client^ client);
    int Client::getId();
    String^ Client::getFirstName();
    void Client::setFirstName(String^ value);
    String^ Client::getLastName();
    void Client::setLastName(String^ value);
    Date Client::getBirthdate();
    void Client::setBirthdate(Date value);
    Address Client::getDeliverAddress();
    void Client::setDeliverAddress(Address value);
    Address Client::getBillingAddress();
    void Client::setBillingAddress(Address value);
};

