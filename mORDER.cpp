#include "mORDER.h"
#include "Article.h"
#include "mARTICLE.h"
#include "mCLIENT.h"
#include "ArticleList.h"

Order ORDER::add(Order order) {

	DataBase^ rcommande = gcnew DataBase;
	String^ theorder = "INSERT INTO Commandes(COMMANDES_REF, COMMANDES_CREA, COMMANDES_REMISE, COMMANDE_STATUT, ID_CLIENT)VALUES('VotreReference', '2023-12-07', 10.5, 1, 123);";
	rcommande->execute(theorder);

}
void ORDER::edit(Order order) {


	DataBase^ rcommande = gcnew DataBase;
	String^ theorder = "USE NORTICBDD; UPDATE Commandes SET COMMANDES_REF = 'NouvelleReference', COMMANDES_CREA = '2023-12-08', COMMANDES_REMISE = 15.0, COMMANDE_STATUT = 2, ID_CLIENT = 456 WHERE ID_COMMANDES =" + order.getId() + "; ";
	rcommande->execute(theorder);

}
void ORDER::remove(Order order) {


	DataBase^ rcommande = gcnew DataBase;
	String^ theorder = "USE NORTICBDD; DELETE FROM CommandesWHERE ID_COMMANDES =" + order.getId() + "; ";
	rcommande->execute(theorder);

}
Order^ ORDER::get(int id) {
	DataBase^ rcommande = gcnew DataBase;
	String^ theorder = "SELECT * FROM Commandes WHERE ID_COMMANDES = "+id+";";
	DataSet^ ds = rcommande->executeToDataSet(theorder);
	String^ reference = ds->Tables[0]->Rows[0]->ItemArray[1]->ToString();
	DateTime date =  Convert::ToDateTime(ds->Tables[0]->Rows[0]->ItemArray[2]);
	String^ remisetemp = ds->Tables[0]->Rows[0]->ItemArray[3]->ToString();
	remisetemp = remisetemp->Replace(",", ".");
	float remise = Single::Parse(remisetemp);

	int statut = Convert::ToInt32(ds->Tables[0]->Rows[0]->ItemArray[4]);
	int idclient = Convert::ToInt32(ds->Tables[0]->Rows[0]->ItemArray[5]);
	Client^ clientcommande = CLIENT::get(idclient);

	String^ commandorder = "SELECT * FROM Commandes_Articles WHERE ID_COMMANDES =" + id + ";";
	DataSet^ ds2 = rcommande->executeToDataSet(commandorder);
	int idarticle = Convert::ToInt32(ds2->Tables[0]->Rows[0]->ItemArray[1]);
	int nbarticle = Convert::ToInt32(ds2->Tables[0]->Rows[0]->ItemArray[2]);
	ArticleList^ liaison = gcnew ArticleList;
	//ArticleInList^ liaison = gcnew ArticleInList(article0, nbarticle);
	int nblignes = Convert::ToInt32(ds2->Tables[0]->Rows->Count);
	int i = 0;
	for (i = 0; i < nblignes; i++) {
		int idarticle = Convert::ToInt32(ds2->Tables[0]->Rows[i]->ItemArray[1]);
		int nbarticle = Convert::ToInt32(ds2->Tables[0]->Rows[i]->ItemArray[2]);
		Article^ articlei = ARTICLE::get(idarticle);
		
	}


	String^ reference = ds->Tables[0]->Rows[0]->ItemArray[1]->ToString();
	
	Order^ sortie = gcnew Order(id, reference, date, liaison, clientcommande, remise, statut);


}
DataSet^ ORDER::search(String^ reference, DateTime date) {
	DataBase^ rcommande = gcnew DataBase;
	String^ theorder = "SELECT * FROM Commandes WHERE COMMANDES_REF Like %" + reference + "% AND COMMANDES_CREA LIKE %"+date.ToString()+"%; ";
	DataSet^ ds = rcommande->executeToDataSet(theorder);
	return ds;

}