#pragma once
#include "Tax.h"
#include "DataBase.h"

ref class mTAX
{
public:
	Tax^ mTAX::add(Tax tax);
	void mTAX::edit(Tax tax);
	void mTAX::remove(Tax tax);
	Tax^ mTAX::get(int id);
	DataSet^ mTAX::search(int percentage);
};

