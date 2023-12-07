#pragma once

using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Data;

public ref class DataBase
{
public:
    DataBase(void);
    int executeToInt(String^ rq_sql);
    void execute(String^ rq_sql);
    DataSet^ executeToDataSet(String^ rq_sql);
    void setSQL(String^ rq_sql);

private:
    String^ sqlRequest;
    String^ chaineConnexion;
    SqlConnection^ conToDb;
    SqlCommand^ commSql;
    SqlDataAdapter^ dataAdapter;
    DataSet^ dataSetObject;
};