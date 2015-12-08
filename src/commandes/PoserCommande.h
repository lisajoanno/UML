/**********


**********/

#ifndef POSERCOMMANDE_H
#define POSERCOMMANDE_H

#include <map>
#include "CommandeRobot.h"

using namespace std;

class PoserCommande : public CommandeRobot {
	
public:
	static PoserCommande poserCommande;

	PoserCommande();
	PoserCommande(string s);
	Commande* constructeurVirtuel();

	void execute();
	void desexecute();
};

#endif
