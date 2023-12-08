#pragma once
#include "ArticleInList.h"

ref class ArticleList {
private:
    ArticleInList^ head;

public:
    void add(Article^ article, int amount);
};
