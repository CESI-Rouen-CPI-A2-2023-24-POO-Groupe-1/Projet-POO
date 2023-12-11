#pragma once
#include "ArticleInList.h"

public ref class ArticleList {
private:
    ArticleInList^ head;

public:
    ArticleList();
    void add(Article^ article, int amount);
    void remove(int index);
    void setAmount(int index, int amount);
    void clear();
    int size();
    int getTotal();
    DataSet^ toDataSet();
    ArticleInList^ get(int index);
};
