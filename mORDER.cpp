#include "mORDER.h"

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
	int percentage = Convert::ToInt32(ds->Tables[0]->Rows[0]->ItemArray[0]);
	Order^ sortie = gcnew Order(id, percentage);


}