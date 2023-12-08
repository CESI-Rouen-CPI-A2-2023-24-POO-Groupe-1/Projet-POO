#include "Order.h"

Order::Order()
{
    this->id = 0;
    this->reference = "";
    this->creation_date = gcnew Date(); // Allocation d'une nouvelle instance de Date
    this->Liste = gcnew ArticleList();
}

Order::Order(int id, String^ reference, Date^ creation_date, ArticleList^ Liste)
{
    this->id = id;
    this->reference = reference;
    this->creation_date = creation_date;
    this->Liste = Liste;
}

Order::Order(String^ reference, Date^ creation_date, ArticleList^ Liste)
{
    this->id = 0;
    this->reference = reference;
    this->creation_date = creation_date;
    this->Liste = Liste;
}
int Order::getId()
{
    return this->id;
}


String^ Order::getReference()
{
    return this->reference;
}

void Order::setReference(String^ reference)
{
    this->reference = reference;
}

Date^ Order::getCreation_date()
{
    return this->creation_date;
}

void Order::setCreation_date(Date^ creation_date)
{
    this->creation_date = creation_date;
}

ArticleList^ Order::getList()
{
    return this->Liste;
}

void Order::setList(ArticleList^ Liste)
{
    this->Liste = Liste;
}