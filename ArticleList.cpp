#include "ArticleList.h"


ArticleList::ArticleList() {

}

void ArticleList::add(Article^ article, int amount) {
    ArticleInList^ newArticle = gcnew ArticleInList(article, amount);
    if (head == nullptr) {
        head = newArticle;
    }
    else {
        ArticleInList^ current = head;
        while (current->getNext() != nullptr) {
            current = current->getNext();
        }
        current->setNext(newArticle);
    }
}
