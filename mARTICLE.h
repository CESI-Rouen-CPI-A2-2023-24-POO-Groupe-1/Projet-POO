#pragma once
#include "Article.h"
#include "Tax.h"
ref class mARTICLE
{
public:
	mARTICLE::mARTICLE(String^ nom, float prixht, Tax^ tax );
	Article mARTICLE::add(Article article);
	void mARTICLE::edit(Article article);
	void mARTICLE::remove(Article article);
	Article^ mARTICLE::get(int id);
	DataSet^ mARTICLE::search(String^ mot, String^ reference);
};

