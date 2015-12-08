/**********


**********/

#ifndef FIGERCOMMANDE_H
#define FIGERCOMMANDE_H

#include <map>
#include "CommandeRobot.h"

using namespace std;

class FigerCommande : public CommandeRobot {

public:
	static FigerCommande figerCommande;

	FigerCommande();
	FigerCommande(string s);
	Commande* constructeurVirtuel();

	void execute();
	void desexecute();
};

#endif
