/**********


**********/

#ifndef SAISIRCOMMANDE_H
#define SAISIRCOMMANDE_H

#include <map>
#include "CommandeRobot.h"

using namespace std;

class SaisirCommande : public CommandeRobot {

private:
	Objet o;
	
public:
	static SaisirCommande saisirCommande;

	SaisirCommande();
	SaisirCommande(string s);
	Commande* constructeurVirtuel();

	void execute();
	void desexecute();
};

#endif
