#include "mARTICLE.h"
#include "mTAX.h"

Article^ ARTICLE::add(Article^ article) {
	DataBase^ rarticle = gcnew DataBase;
	String^ order = "USE NORTICBDD; INSERT INTO Articles (ARTICLES_NOM, ARTICLES_PRIX_HT, ID_TVA) VALUES ('" + article->getName() + "'," + article->getPrice() + ", " + article->getTax() + "); SELECT SCOPE_IDENTITY();";
	int id = rarticle->executeToInt(order);
	Article^ newarticle = gcnew Article(id, article->getName(), article->getPrice(), article->getTax());
	return newarticle;
}

void ARTICLE::edit(Article^ article) {
	DataBase^ rarticle = gcnew DataBase;
	String^ order = "USE NORTICBDD; UPDATE Articles SET ARTICLES_NOM = '" + article->getName() + "',	ARTICLES_PRIX_HT = " + article->getPrice() + ",	ID_TVA = " + article->getTax() + " WHERE ID_ARTICLES = " + article->getId() + "; ";
	rarticle->execute(order);
}

void ARTICLE::remove(Article^ article) {
	DataBase^ rarticle = gcnew DataBase;
	String^ order = "USE NORTICBDD; DELETE FROM Articles WHERE ID_ARTICLES = " + article->getId() + "; ";
	rarticle->execute(order);
}

Article^ ARTICLE::get(int id) {
	DataBase^ rarticle = gcnew DataBase;
	String^ order = "USE NORTICBDD; SELECT * FROM Articles WHERE ID_ARTICLES = " + id + "; ";
	DataSet^ ds = rarticle->executeToDataSet(order);
	int nid = Convert::ToInt32(ds->Tables[0]->Rows[0]->ItemArray[0]);
	String^ name = ds->Tables[0]->Rows[0]->ItemArray[1]->ToString();
	int price = Convert::ToInt32(ds->Tables[0]->Rows[0]->ItemArray[2]);
	int idtax = Convert::ToInt32(ds->Tables[0]->Rows[0]->ItemArray[3]);
	Tax^ tax = TAX::get(idtax);
	Article^ temp = gcnew Article(nid, name, price, tax);
	return temp;

}


DataSet^ ARTICLE::search(String^ mot, String^ reference) {
	DataBase^ rarticle = gcnew DataBase;
	String^ order = "USE NORTICBDD; SELECT Articles.*, Reference.REFERENCE_NOM FROM Articles JOIN Reference ON Articles.ID_REFERENCE = Reference.ID_REFERENCE WHERE Reference.REFERENCE_NOM LIKE " + reference + " AND ARTICLES_NOM LIKE %" + mot + "%; ";

	DataSet^ ds = rarticle->executeToDataSet(order);
	return ds;
}