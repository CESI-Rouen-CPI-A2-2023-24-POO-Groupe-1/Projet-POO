#pragma once
#include "Tax.h"
#include "DataBase.h"

public ref class TAX
{
public:
    static Tax^ TAX::add(Tax^ tax);
    static void TAX::edit(Tax^ tax);
    static void TAX::remove(Tax^ tax);
    static Tax^ TAX::get(int id);
    static DataSet^ TAX::search(float percentage);
    static int TAX::go(float percentage);
};