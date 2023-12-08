#pragma once
#include "Tax.h"
#include "DataBase.h"

ref class TAX
{
public:
    static Tax^ TAX::add(Tax^ tax);
    static void TAX::edit(Tax^ tax);
    static void TAX::remove(Tax^ tax);
    static Tax^ TAX::get(int id);
    static DataSet^ TAX::search(int percentage);
};