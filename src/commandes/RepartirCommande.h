/**********

Classe RepartirCommande

Commande pour faire repartir le robot

**********/

#ifndef REPARTIRCOMMANDE_H
#define REPARTIRCOMMANDE_H

#include <map>
#include "CommandeRobot.h"

using namespace std;

class RepartirCommande : public CommandeRobot {

public:
	static RepartirCommande repartirCommande;

	RepartirCommande();
	RepartirCommande(string s);
	Commande* constructeurVirtuel();
	
	void execute();
	void desexecute();

};

#endif
