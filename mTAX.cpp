#include "mTAX.h"


Tax^ TAX::add(Tax^ tax) {
    DataBase^ rtax = gcnew DataBase;
    String^ order = "INSERT INTO Taux_TVA(TVA_TAUX) VALUES(" + tax->getPercentage() + "); SELECT SCOPE_IDENTITY();";
    int idtaux = rtax->executeToInt(order);
    Tax^ newtax = gcnew Tax(idtaux, tax->getPercentage());
    return newtax;
}

void TAX::edit(Tax^ tax) {
    DataBase^ rtax = gcnew DataBase;
    if (tax->getId() == 0) {
        throw gcnew Exception("Id inconnu");
    }
    else {
        String^ order = "UPDATE Taux_TVA SET TVA_TAUX =" + tax->getPercentage() + " WHERE ID_TVA = " + tax->getId() + ";";
    }
}

void TAX::remove(Tax^ tax) {
    DataBase^ rtax = gcnew DataBase;
    if (tax->getId() == 0) {
        throw gcnew Exception("Id inconnu");
    }
    else {
        String^ order = "DELETE Taux_TVA WHERE ID_TVA = " + tax->getId() + ";";
    }
}
Tax^ TAX::get(int id) {
    DataBase^ rtax = gcnew DataBase;
    String^ order = "SELECT TVA_TAUX FROM Taux_TVA WHERE ID_TVA = " + id;
    DataSet^ ds = rtax->executeToDataSet(order);
    try {
        int percentage = Convert::ToInt32(ds->Tables[0]->Rows[0]->ItemArray[0]);
        Tax^ sortie = gcnew Tax(id, percentage);
        return sortie;
    }
    catch (Exception^ event) {
        return nullptr;
    }

}
DataSet^ TAX::search(float percentage) {
    DataBase^ rtax = gcnew DataBase;
    String^ order = "SELECT * FROM TAUX_TVA WHERE TVA_TAUX = " + percentage.ToString();
    DataSet^ ds = rtax->executeToDataSet(order);
    return ds;
}