#include "mARTICLE.h"
#include "mTAX.h"


mARTICLE::mARTICLE(String^ nom, float prixht, Tax^ tax) {
	DataBase^ rarticle = gcnew DataBase;
	int id = tax->getId();
	String^ order = "USE NORTICBDD; INSERT INTO Articles (ARTICLES_NOM, ARTICLES_PRIX_HT, ID_TVA) VALUES ('" + nom + "'," + prixht + ", " + id + "); ";
	rarticle->execute(order);
}
Article mARTICLE::add(Article article){
	DataBase^ rarticle = gcnew DataBase;
	String^ order = "USE NORTICBDD; INSERT INTO Articles (ARTICLES_NOM, ARTICLES_PRIX_HT, ID_TVA) VALUES ('" + article.getName() + "'," + article.getPrice() + ", " + article.getTax() + "); ";
	rarticle->execute(order);
}
void mARTICLE::edit(Article article) {
	DataBase^ rarticle = gcnew DataBase;
	String^ order = "USE NORTICBDD; UPDATE Articles SET ARTICLES_NOM = '" + article.getName() + "',	ARTICLES_PRIX_HT = " + article.getPrice() + ",	ID_TVA = " + article.getTax() + " WHERE ID_ARTICLES = " + article.getId() + "; ";
	rarticle->execute(order);
}
void mARTICLE::remove(Article article) {
	DataBase^ rarticle = gcnew DataBase;
	String^ order = "USE NORTICBDD; DELETE FROM Articles WHERE ID_ARTICLES = " + article.getId() + "; ";
	rarticle->execute(order);
}
Article^ mARTICLE::get(int id) {
	DataBase^ rarticle = gcnew DataBase;
	String^ order = "USE NORTICBDD; SELECT * FROM Articles WHERE ID_ARTICLES = " + id + "; ";
	DataSet^ ds = rarticle->executeToDataSet(order);
	int id = Convert::ToInt32(ds->Tables[0]->Rows[0]->ItemArray[0]);
	String^ name = ds->Tables[0]->Rows[0]->ItemArray[1]->ToString();
	int price = Convert::ToInt32(ds->Tables[0]->Rows[0]->ItemArray[2]);
	int idtax = Convert::ToInt32(ds->Tables[0]->Rows[0]->ItemArray[3]);
	Tax^ tax = TAX::get(idtax);
	Article^ temp = gcnew Article(id, name, price, tax);
	return temp;

}


void mARTICLE::search(String) {

}