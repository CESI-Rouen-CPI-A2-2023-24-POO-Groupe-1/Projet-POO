#include "Tax.h"
#include "DataBase.h"

using namespace System;

ref class Article {
private:
	int id;
	String^ name;
	float price;
	Tax^ tax;
public:
	Article::Article(String^ name, float price, Tax^ tax);
	Article::Article(int id, String^ name, float price, Tax^ tax);
	int Article::getId();
	String^ Article::getName();
	void Article::setName(String^ name);
	float Article::getPrice();
	void Article::setPrice(float price);
	Tax^ Article::getTax();
	void Article::setTax(Tax tax);



};