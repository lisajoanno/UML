#ifndef AVANCERCOMMANDE_H
#define AVANCERCOMMANDE_H

#include <map>
#include "CommandeRobot.h"

using namespace std;

class AvancerCommande : public CommandeRobot {

private:
	int x, y;
	
public:
	static AvancerCommande avancerCommande;

	AvancerCommande();
	AvancerCommande(string s);
	Commande* constructeurVirtuel();

	void execute();
	void desexecute();
};

#endif
