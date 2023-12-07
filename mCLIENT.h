#pragma once
#include "Client.h"
#include "DataBase.h"

using namespace System;
using namespace System::Data;

ref class mCLIENT
{
public:
	Client^ mCLIENT::add(Client^ client);
	void mCLIENT::edit(Client^ client);
	void mCLIENT::remove(Client^ client);
	Client^ mCLIENT::get(int id);
	DataSet mCLIENT::search(String^ first_name, String^ last_name, Date birthday);

};

