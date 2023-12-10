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

void ArticleList::remove(int index) {
    if (index == 0) {
		head = head->getNext();
	}
	else {
		ArticleInList^ current = head;
		for (int i = 0; i < index - 1; i++) {
			current = current->getNext();
		}
		current->setNext(current->getNext()->getNext());
	}
}

ArticleInList^ ArticleList::get(int index) {
ArticleInList^ current = head;
	for (int i = 0; i < index; i++) {
		current = current->getNext();
	}
	return current;
}

int ArticleList::size() {
	int length = 0;
	ArticleInList^ current = head;
	while (current != nullptr) {
		length++;
		current = current->getNext();
	}
	return length;
}

void ArticleList::clear() {
	head = nullptr;
}

void ArticleList::setAmount(int index, int amount) {
	ArticleInList^ current = head;
	for (int i = 0; i < index; i++) {
		current = current->getNext();
	}
	current->setAmount(amount);
}

DataSet^ ArticleList::toDataSet() {
	DataSet^ dataSet = gcnew DataSet();
	dataSet->Tables->Add("Articles");
	dataSet->Tables["Articles"]->Columns->Add("index");
	dataSet->Tables["Articles"]->Columns->Add("Référence");
	dataSet->Tables["Articles"]->Columns->Add("Prix HT");
	dataSet->Tables["Articles"]->Columns->Add("TVA");
	dataSet->Tables["Articles"]->Columns->Add("Prix TTC");
	dataSet->Tables["Articles"]->Columns->Add("Quantité");
	ArticleInList^ current = head;
	int index = 0;
	while (current != nullptr) {
		dataSet->Tables["Articles"]->Rows->Add(index, current->getName(), current->getPrice(), current->getTax()->getPercentage(), current->getPrice() * (current->getTax()->getPercentage() / 100), current->getAmount());
		current = current->getNext();
		index++;
	}
	return dataSet;
}


