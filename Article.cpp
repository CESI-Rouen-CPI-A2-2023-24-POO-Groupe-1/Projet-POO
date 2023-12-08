#include "Article.h"

Article::Article(String^ name, float price, Tax^ tax)
{
    this->name = name;
    this->price = price;
    this->tax = tax;
}
Article::Article(int id, String^ name, float price, Tax^ tax)
{
    this->name = name;
    this->price = price;
    this->tax = tax;
    this->id = id;
}

Article::Article(Article^ article)
{
    this->id = article->getId();
    this->name = article->getName();
    this->price = article->getPrice();
    this->tax = article->getTax();
}

int Article::getId()
{
    return id;
}

String^ Article::getName()
{
    return name;
}

void Article::setName(String^ newName)
{
    name = newName;
}

float Article::getPrice()
{
    return price;
}

void Article::setPrice(float newPrice)
{
    price = newPrice;
}

Tax^ Article::getTax()
{
    Tax^ taxCopy = gcnew Tax(tax->getId(), tax->getPercentage());
    return taxCopy;

}
void Article::setTax(Tax tax)
{
    Tax^ taxCopy = gcnew Tax(tax.getId(), tax.getPercentage());
    this->tax = taxCopy;
}