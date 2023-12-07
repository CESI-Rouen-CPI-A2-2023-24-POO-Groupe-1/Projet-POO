#include "Article.h"

Article::Article(String^ name, float price, Tax^ tax)
{
    this->name = name;
    this->price = price;
    this->tax = tax;
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