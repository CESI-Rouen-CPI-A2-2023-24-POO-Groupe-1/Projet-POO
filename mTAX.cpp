#include "mTAX.h"


Tax TAX::add(Tax tax) {
	DataBase^ rtax = gcnew DataBase;
	String^ order = "USE NORTICBDD; INSERT INTO Taux_TVA(TVA_TAUX) VALUES(" + tax.getPercentage() + "); ";
	rtax->execute(order);
}

void TAX::edit(Tax^  tax) {
	DataBase^ rtax = gcnew DataBase;
	if (tax->getId() == 0) {
		throw gcnew Exception("Id inconnu");
	}
	else {
		String^ order = "USE NORTICBDD; UPDATE Taux_TVA SET TVA_TAUX =" + tax->getPercentage() + " WHERE ID_TVA = " + tax->getId() + ";";
		}
}

void TAX::remove(Tax^ tax) {
	DataBase^ rtax = gcnew DataBase;
	if (tax->getId() == 0) {
		throw gcnew Exception("Id inconnu");
	}
	else {
		String^ order = "USE NORTICBDD; DELETE Taux_TVA WHERE ID_TVA = " + tax->getId() + ";";
	}
}
Tax^ TAX::get(int id) {
	DataBase^ rtax = gcnew DataBase;
	String^ order = "USE NORTICBDD; SELECT TVA_TAUX WHERE ID_TVA = " + id;
	DataSet^ ds = rtax->executeToDataSet(order);
	int percentage = Convert::ToInt32(ds->Tables[0]->Rows[0]->ItemArray[0]);
	Tax^ sortie = gcnew Tax(id, percentage);
	return sortie;

}
DataSet^ TAX::search(int percentage) {
	DataBase^ rtax = gcnew DataBase;
	String^ order = "USE NORTICBDD; SELECT ID_TVA WHERE TVA_TAUX = " + percentage;
	DataSet^ ds = rtax->executeToDataSet(order);
	return ds;

}