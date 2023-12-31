#include "Order.h"

Order::Order()
{
    this->id = 0;
    this->reference = "";
    this->creation_date = DateTime();
    this->Liste = gcnew ArticleList();
    this->client = gcnew Client();;
    this->remise = 0;
    this->statut = 0;
}

Order::Order(int id, String^ reference, DateTime creation_date, ArticleList^ Liste, Client^ client, float remise, int statut)
{
    this->id = id;
    this->reference = reference;
    this->creation_date = creation_date;
    this->Liste = Liste;
    this->client = client;
    this->remise = remise;
    this->statut = statut;
}

Order::Order(String^ reference, DateTime creation_date, ArticleList^ Liste, Client^ client, float remise, int statut)
{
    this->id = 0;
    this->reference = reference;
    this->creation_date = creation_date;
    this->Liste = Liste;
    this->client = client;
    this->remise = remise;
    this->statut = statut;
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

ArticleList^ Order::getArticleList()
{
	return this->Liste;
}

void Order::setArticleList(ArticleList^ Liste)
{
	this->Liste = Liste;
}

DateTime Order::getCreation_date()
{
    return this->creation_date;
}

void Order::setCreation_date(DateTime creation_date)
{
    this->creation_date = creation_date;
}

Client^ Order::getClient()
{
    return this->client;
}

void Order::setClient(Client^ client)
{
	this->client = client;
}

float Order::getRemise()
{
	return this->remise;
}

void Order::setRemise(float remise)
{
	this->remise = remise;
}

ArticleList^ Order::getList()
{
    return this->Liste;
}

void Order::setList(ArticleList^ Liste)
{
    this->Liste = Liste;
}