#include "mORDER.h"
#include "Article.h"
#include "mARTICLE.h"
#include "mCLIENT.h"
#include "ArticleList.h"

Order^ ORDER::add(Order^ order) {

	DataBase^ rcommande = gcnew DataBase;
	String^ theorder = "INSERT INTO Commandes(COMMANDES_REF, COMMANDES_CREA, COMMANDES_REMISE, COMMANDE_STATUT, ID_CLIENT) VALUES ('" + order->getReference() + "', '" + order->getCreation_date().ToString() + "', " + order->getRemise() + ", 0, " + order->getClient()->getId() + "); SELECT SCOPE_IDENTITY();";
	int id = rcommande->executeToInt(theorder);

	ArticleList^ list = order->getArticleList();
	int nblignes = list->size();
	int i = 0;
	for (i = 0; i < nblignes; i++) {
		ArticleInList^ article = list->get(i);
		String^ theorder2 = "INSERT INTO Commandes_Articles(ID_COMMANDES, ID_ARTICLES, COMMANDES_ARTICLES_NB) VALUES (" + id + ", " + article->getId() + ", " + article->getAmount() + ");";
		rcommande->execute(theorder2);
	}

	return order;
}

void ORDER::edit(Order^ order) {
	DataBase^ rcommande = gcnew DataBase;
	String^ theorder = "USE NORTICBDD; UPDATE Commandes SET COMMANDES_REF = '" + order->getReference() + "', COMMANDES_CREA = '" + order->getCreation_date().ToString() + "', COMMANDES_REMISE = " + order->getRemise() + ", COMMANDE_STATUT = 0, ID_CLIENT = " + order->getClient()->getId() + " WHERE ID_COMMANDES = " + order->getId() + ";";
	rcommande->execute(theorder);

	ArticleList^ list = order->getArticleList();
	int nblignes = list->size();
	int i = 0;
	for (i = 0; i < nblignes; i++) {
		ArticleInList^ article = list->get(i);
		// Check if article is already in the order
		String^ theorder2 = "SELECT * FROM Commandes_Articles WHERE ID_COMMANDES = " + order->getId() + " AND ID_ARTICLES = " + article->getId() + ";";
		DataSet^ result = rcommande->executeToDataSet(theorder2);
		if (result->Tables[0]->Rows->Count == 0) {
			// If not, add it
			String^ theorder3 = "INSERT INTO Commandes_Articles(ID_COMMANDES, ID_ARTICLES, COMMANDES_ARTICLES_NB) VALUES (" + order->getId() + ", " + article->getId() + ", " + article->getAmount() + ");";
			rcommande->execute(theorder3);
		}
		else {
			// If yes, update it
			String^ theorder3 = "UPDATE Commandes_Articles SET COMMANDES_ARTICLES_NB = " + article->getAmount() + " WHERE ID_COMMANDES = " + order->getId() + " AND ID_ARTICLES = " + article->getId() + ";";
			rcommande->execute(theorder3);
		}
	}
}

void ORDER::remove(Order^ order) {
	DataBase^ rcommande = gcnew DataBase;
	String^ theorder = "USE NORTICBDD; DELETE FROM Commandes WHERE ID_COMMANDES =" + order->getId() + "; ";
	rcommande->execute(theorder);

	String^ theorder2 = "DELETE FROM Commandes_Articles WHERE ID_COMMANDES =" + order->getId() + "; ";
}

Order^ ORDER::get(int id) {
	DataBase^ rcommande = gcnew DataBase;
	String^ theorder = "SELECT * FROM Commandes WHERE ID_COMMANDES = "+id+";";
	DataSet^ ds = rcommande->executeToDataSet(theorder);
	String^ reference = ds->Tables[0]->Rows[0]->ItemArray[1]->ToString();
	DateTime date =  Convert::ToDateTime(ds->Tables[0]->Rows[0]->ItemArray[2]);
	String^ remisetemp = ds->Tables[0]->Rows[0]->ItemArray[3]->ToString();
	float remise = Single::Parse(remisetemp);

	int statut = Convert::ToInt32(ds->Tables[0]->Rows[0]->ItemArray[4]);
	int idclient = Convert::ToInt32(ds->Tables[0]->Rows[0]->ItemArray[5]);
	Client^ clientcommande = CLIENT::get(idclient);

	String^ commandorder = "SELECT * FROM Commandes_Articles WHERE ID_COMMANDES =" + id + ";";
	DataSet^ ds2 = rcommande->executeToDataSet(commandorder);
	ArticleList^ liaison = gcnew ArticleList;
	int nblignes = Convert::ToInt32(ds2->Tables[0]->Rows->Count);
	int i = 0;
	for (i = 0; i < nblignes; i++) {
		int idarticle = Convert::ToInt32(ds2->Tables[0]->Rows[i]->ItemArray[1]);
		int nbarticle = Convert::ToInt32(ds2->Tables[0]->Rows[i]->ItemArray[2]);
		Article^ articlei = ARTICLE::get(idarticle);
		liaison->add(articlei, nbarticle);
	}


	String^ areference = ds->Tables[0]->Rows[0]->ItemArray[1]->ToString();
	
	Order^ sortie = gcnew Order(id, areference, date, liaison, clientcommande, remise, statut);

	return sortie;
}


DataSet^ ORDER::search(String^ reference, DateTime date) {
	DataBase^ rcommande = gcnew DataBase;
	String^ theorder = "SELECT * FROM Commandes WHERE COMMANDES_REF Like %" + reference + "% AND COMMANDES_CREA LIKE %"+date.ToString()+"%; ";
	DataSet^ ds = rcommande->executeToDataSet(theorder);
	return ds;
}

DataSet^ ORDER::search(String^ reference, String^ id_client, String^ nom_client, String^ prenom_client, DateTime date) {
	DataBase^ rcommande = gcnew DataBase;
	String^ datestring = date.ToString("yyyy-MM-dd");
	String^ theorder = "SELECT * FROM Commandes INNER JOIN Client ON Commandes.id_client = Client.id_client WHERE COMMANDES_REF Like '%" + reference + "%' AND COMMANDES_CREA LIKE '%" + datestring + "%' AND Client.id_client LIKE '%" + id_client + "%' AND Client.id_client IN (SELECT ID_CLIENT FROM Clients WHERE CLIENT_NOM LIKE '%" + nom_client + "%' AND CLIENT_PRENOM LIKE '%" + prenom_client + "%');";
	DataSet^ ds = rcommande->executeToDataSet(theorder);
	return ds;
}

DataSet^ ORDER::search(String^ reference, String^ id_client, String^ nom_client, String^ prenom_client) {
	DataBase^ rcommande = gcnew DataBase;
	String^ theorder = "SELECT * FROM Commandes INNER JOIN Client ON Commandes.id_client = Client.id_client WHERE COMMANDES_REF Like '%" + reference + "%' AND Client.id_client LIKE'%" + id_client + "%' AND Client.id_client IN (SELECT ID_CLIENT FROM Client WHERE CLIENT_NOM LIKE '%" + nom_client + "%' AND CLIENT_PRENOM LIKE '%" + prenom_client + "%'); ";
	DataSet^ ds = rcommande->executeToDataSet(theorder);
	return ds;
}