// Projet POO CESI 2023
#include "DataBase.h"
using namespace std;
using namespace NS_Composants;
int main() {
	DataBase Feur;
	Feur.actionRows("use NORTICBDD; INSERT INTO Pays (PAYS_NOM) VALUES ('France');");
	cout << "fin de requete" << endl;
	return 0;
}