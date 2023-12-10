#pragma once
#include "Date.h"
#include "Client.h"
#include "ArticleList.h"
using namespace System;

public ref class Order
{
private:
    int id;
    String^ reference;
    DateTime creation_date;
    ArticleList^ Liste;
    Client^ client;
    float remise;
    int statut;

public:
    Order(); // Constructeur par défaut
    Order(int id, String^ reference, DateTime creation_date, ArticleList^ Liste, Client^ client, float remise, int statut);
    Order(String^ reference, DateTime creation_date, ArticleList^ Liste, Client^ client, float remise, int statut);

    int getId();
    String^ getReference();
    void setReference(String^ reference);
    ArticleList^ getArticleList();
    void setArticleList(ArticleList^ Liste);
    DateTime getCreation_date();
    void setCreation_date(DateTime creation_date); 
    Client^ getClient();
	void setClient(Client^ client);
    float getRemise();
	void setRemise(float remise);
    ArticleList^ getList();
    void setList(ArticleList^ Liste);
    float getTotal();
};