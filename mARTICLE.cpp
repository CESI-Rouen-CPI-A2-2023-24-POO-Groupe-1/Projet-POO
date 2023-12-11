#include "mARTICLE.h"
#include "mTAX.h"
#include "DataBase.h"

Article^ ARTICLE::add(Article^ article) {
	DataBase^ rarticle = gcnew DataBase;
	String^ order1 = "INSERT INTO Articles (ARTICLES_NOM, ARTICLES_PRIX_HT, ID_TVA) VALUES ('" + article->getName() + "'," + article->getPrice() + ", " + article->getTax()->getId() + ");";
	
	rarticle->execute(order1);
	String^ order2 = "SELECT TOP 1 ID_ARTICLES FROM Articles ORDER BY ID_ARTICLES ASC;";
	int id = rarticle->executeToInt(order2);
	Article^ newarticle = gcnew Article(id, article->getName(), article->getPrice(), article->getTax());
	return newarticle;
}

void ARTICLE::edit(Article^ article) {
	DataBase^ rarticle = gcnew DataBase;
	String^ order = "UPDATE Articles SET ARTICLES_NOM = '" + article->getName() + "', ARTICLES_PRIX_HT = " + article->getPrice() + ", ID_TVA = " + article->getTax()->getId() + " WHERE ID_ARTICLES = " + article->getId() + "; ";
	rarticle->execute(order);
}

void ARTICLE::remove(Article^ article) {
	DataBase^ rarticle = gcnew DataBase;
	try {
		if (article->getId() == 0) {
			throw gcnew Exception("Unknown ID");
		}
		else {
			String^ order = "DELETE FROM Articles WHERE ID_ARTICLES = " + article->getId() + "; ";
			rarticle->execute(order);
		}
	}
	catch (Exception^ ex) {
		System::Windows::Forms::MessageBox::Show("Erreur : Vous n'avez pas les privilèges nécessaires");
	}
}


Article^ ARTICLE::get(int id) {
	DataBase^ rarticle = gcnew DataBase;
	String^ order = "SELECT * FROM Articles WHERE ID_ARTICLES = " + id + "; ";
	DataSet^ ds = rarticle->executeToDataSet(order);
	int nid = Convert::ToInt32(ds->Tables[0]->Rows[0]->ItemArray[0]);
	String^ name = ds->Tables[0]->Rows[0]->ItemArray[1]->ToString();
	int price = Convert::ToInt32(ds->Tables[0]->Rows[0]->ItemArray[2]);
	int idtax = Convert::ToInt32(ds->Tables[0]->Rows[0]->ItemArray[3]);
	Tax^ tax = TAX::get(idtax);
	Article^ temp = gcnew Article(nid, name, price, tax);
	return temp;

}


DataSet^ ARTICLE::search(String^ id, String^ nom, String^ prix) {
	DataBase^ db = gcnew DataBase();
	String^ order = "SELECT * FROM Articles WHERE id_articles LIKE '%" + id + "%' AND articles_nom LIKE '%" + nom + "%' AND articles_prix_ht LIKE '%" + prix + "%';";
	DataSet^ ds = db->executeToDataSet(order);
	return ds;
}
