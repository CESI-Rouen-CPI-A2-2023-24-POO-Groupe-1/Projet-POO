#include "DataBase.h"

using namespace NS_Composants;

DataBase::DataBase(void) {
    this->sqlRequest = gcnew String("");
    this->chaineConnexion = gcnew String("Data Source=SEPTEMBRE\\MSSQL_DUBUS; Initial Catalog = NORTICBDD; Integrated Security=True;");
    this->conToDb = gcnew SqlConnection(this->chaineConnexion);
    this->commSql = gcnew SqlCommand;
    this->commSql->CommandType = CommandType::Text;
    this->dataAdapter = gcnew System::Data::SqlClient::SqlDataAdapter;
    this->dataSetObject = gcnew DataSet;
}

Int64 DataBase::executeToInt(String^ rq_sql) {
    this->setSQL(rq_sql);
    this->execute(this->sqlRequest);
    if (this->dataSetObject->Tables[0]->Rows->Count > 0) {
        DataRow^ row = this->dataSetObject->Tables[0]->Rows[0];
        return Convert::ToInt64(row->ItemArray[0]);
    }
    else {
        return 0;
    }
}

System::Void DataBase::execute(String^ rq_sql) {
    this->setSQL(rq_sql);
    this->commSql->CommandText = this->sqlRequest;
    this->conToDb->Open();
    this->commSql->Connection = this->conToDb;
    this->commSql->ExecuteNonQuery();
    this->conToDb->Close();
    this->commSql->Connection->Close();
}

DataSet^ NS_Composants::DataBase::executeToDataSet(String^ rq_sql)
{
    if (this->conToDb->State != ConnectionState::Open) conToDb->Open();
    this->commSql = gcnew System::Data::SqlClient::SqlCommand;
    this->commSql->Connection = conToDb; // Définir la connexion pour la commande SQL
    this->setSQL(rq_sql);
    this->commSql->CommandText = this->sqlRequest;

    this->dataAdapter = gcnew System::Data::SqlClient::SqlDataAdapter;
    this->dataSetObject = gcnew DataSet;
    this->dataAdapter->SelectCommand = this->commSql;
    this->dataAdapter->Fill(this->dataSetObject);

    this->conToDb->Close(); // Fermer la connexion après utilisation

    return this->dataSetObject;
}


System::Void DataBase::setSQL(String^ rq_sql) {
    if (rq_sql == "") {
        this->sqlRequest = "";
        return;
    }
    this->sqlRequest = rq_sql;
}
