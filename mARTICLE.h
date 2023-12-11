#pragma once
#include "Article.h"
#include "Tax.h"
public ref class ARTICLE
{
public:
    static Article^ add(Article^ article);
    static void edit(Article^ article);
    static void remove(Article^ article);
    static Article^ get(int id);
    static DataSet^ search(String^ id, String^ nom, String^ prix);
};