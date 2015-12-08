#ifndef PESERCOMMANDE_H
#define PESERCOMMANDE_H

#include "CommandeRobot.h"

using namespace std;

class PeserCommande : public CommandeRobot {

public:
	static PeserCommande peserCommande;

	PeserCommande();
	PeserCommande(string s);
	Commande* constructeurVirtuel();

	void execute();
	void desexecute();
};


#endif
