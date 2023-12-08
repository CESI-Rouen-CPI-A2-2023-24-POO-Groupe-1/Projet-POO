#include "ArticleInList.h"

ArticleInList^ ArticleInList::getNext() {
    return next;
}

void ArticleInList::setNext(ArticleInList^ next) {
    this->next = next;
}

int ArticleInList::getAmount() {
    return amount;
}

void ArticleInList::setAmount(int amount) {
    this->amount = amount;
}

ArticleInList::ArticleInList(Article^ article, int amount) : Article(article) {
    this->amount = amount;
    this->next = nullptr;
}

ArticleInList::ArticleInList(Article^ article, int amount, ArticleInList^ next) : Article(article) {
    this->amount = amount;
    this->next = next;
}
