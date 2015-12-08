#ifndef RENCONTRERPLOTCOMMANDE_H
#define RENCONTRERPLOTCOMMANDE_H

#include <map>
#include "CommandeRobot.h"

using namespace std;

class RencontrerPlotCommande : public CommandeRobot {

private:
	Plot p;

public:
	static RencontrerPlotCommande rencontrerPlotCommande;

	RencontrerPlotCommande();
	RencontrerPlotCommande(string s);
	Commande* constructeurVirtuel();

	void execute();
	void desexecute();
};

#endif
