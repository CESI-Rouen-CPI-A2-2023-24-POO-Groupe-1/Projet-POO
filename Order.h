#pragma once
#include "Date.h"
#include "ArticleList.h"
using namespace System;

ref class Order
{
private:
    int id;
    String^ reference;
    Date^ creation_date;
    ArticleList^ Liste;

public:
    Order(); // Constructeur par défaut
    Order(int id, String^ reference, Date^ creation_date, ArticleList^ Liste);
    Order(String^ reference, Date^ creation_date, ArticleList^ Liste);

    int getId();
    String^ getReference();
    void setReference(String^ reference);
    Date^ getCreation_date(); // Maintenant un pointeur
    void setCreation_date(Date^ creation_date); // Maintenant un pointeur
    ArticleList^ getList();
    void setList(ArticleList^ Liste);
};