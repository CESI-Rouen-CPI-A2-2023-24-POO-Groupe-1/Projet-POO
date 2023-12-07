#include "mCLIENT.h"
#include <iostream>

using namespace NS_Composants;
using namespace System::Data;

Client^ mCLIENT::add(Client^ client)
{
	DataBase rclient;//r pour requete

	if (client->getBillingAddress()->getId()==0) {

	}
}