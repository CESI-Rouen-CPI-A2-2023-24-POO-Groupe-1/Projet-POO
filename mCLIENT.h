#pragma once
#include "Mapping.h"
#include "Client.h"

using namespace System;
using namespace System::Data;

ref class CLIENT :
    public Mapping
{
public:
    Client^ add(Client^ client);
    void edit(Client^ client);
    void remove(Client^ client);
    Client^ get(int id);
    DataSet^ search(String^ first_name, String^ last_name);
};

