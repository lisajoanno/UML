/**********


**********/

#ifndef AVANCERCOMMANDE_H
#define AVANCERCOMMANDE_H

#include <map>
#include "CommandeRobot.h"

using namespace std;

class AvancerCommande : public CommandeRobot {

private :
	int x, y;
	
public :
	
	AvancerCommande() { 
		Commande("AvancerCommande");
		Commande::nouvelleCommande("AvancerCommande");
	}
	void execute();
	void desexecute();

	Commande* constructeurVirtuel() {
		return new AvancerCommande();
	}

	static AvancerCommande avancerCommande;
};

#endif
