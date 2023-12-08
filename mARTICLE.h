#pragma once
#include "Article.h"
#include "Tax.h"
ref class ARTICLE
{
public:
    static Article^ ARTICLE::add(Article^ article);
    static void ARTICLE::edit(Article^ article);
    static void ARTICLE::remove(Article^ article);
    static Article^ ARTICLE::get(int id);
    static DataSet^ ARTICLE::search(String^ mot, String^ reference);
};