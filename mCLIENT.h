#pragma once
#include "Mapping.h"
#include "Client.h"

using namespace System;
using namespace System::Data;

public ref class CLIENT :
    public Mapping
{
public:
    static Client^ add(Client^ client);
    static void edit(Client^ client);
    static void remove(Client^ client);
    static Client^ get(int id);
    static DataSet^ search(String^ id, String^ first_name, String^ last_name);
};

