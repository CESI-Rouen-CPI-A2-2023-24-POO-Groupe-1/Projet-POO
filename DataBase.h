#pragma once

#include <string>
#include <vcclr.h>
#include <msclr\marshal_cppstd.h>
#include <vcclr.h>
#include <iostream>
#include <windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>

namespace NS_Composants {

    using namespace System;
    using namespace System::Data::SqlClient;
    using namespace System::Data;

    public ref class DataBase
    {
    public:
        DataBase(void);
        Int64 actionRowsID(String^ rq_sql);
        System::Void actionRows(String^ rq_sql);
        DataSet^ getRows(String^ rq_sql);
        System::Void setSQL(String^ rq_sql);

    private:
        String^ sqlRequest;
        String^ chaineConnexion;
        SqlConnection^ conToDb;
        SqlCommand^ commSql;
        SqlDataAdapter^ dataAdapter;
        DataSet^ dataSetObject;
    };

} // namespace NS_Composants
