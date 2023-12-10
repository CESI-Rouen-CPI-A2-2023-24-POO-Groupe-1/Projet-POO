#pragma once
#include "Mapping.h"
#include "Employe.h"

using namespace System;
using namespace System::Data;

ref class EMPLOYES : public Mapping {
public:
    static Employes^ add(Employes^ employes);
    static void edit(Employes^ employes);
    static void remove(Employes^ employes);
    static Employes^ get(int id);
    static DataSet^ search(String^ id, String^ first_name, String^ last_name);
};

