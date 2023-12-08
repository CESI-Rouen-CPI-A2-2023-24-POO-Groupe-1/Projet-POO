#pragma once
#include "ArticleInList.h"

ref class ArticleList {
private:
    ArticleInList^ head;

public:
    ArticleList();
    void add(Article^ article, int amount);
};
