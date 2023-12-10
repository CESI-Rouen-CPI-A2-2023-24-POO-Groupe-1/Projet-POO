#pragma once
#include "ArticleInList.h"

public ref class ArticleList {
private:
    ArticleInList^ head;

public:
    ArticleList();
    void add(Article^ article, int amount);
};
