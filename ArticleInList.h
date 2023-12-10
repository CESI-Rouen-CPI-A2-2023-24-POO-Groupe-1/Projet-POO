#pragma once
#include "Article.h"

public ref class ArticleInList : public Article {
private:
    ArticleInList^ next;
    int amount;

public:
    ArticleInList^ getNext();
    void setNext(ArticleInList^ next);
    int getAmount();
    void setAmount(int amount);
    ArticleInList(Article^ article, int amount);
    ArticleInList(Article^ article, int amount, ArticleInList^ next);
};
