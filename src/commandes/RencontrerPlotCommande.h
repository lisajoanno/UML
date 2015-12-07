#ifndef RENCONTRERPLOTCOMMANDE_H
#define RENCONTRERPLOTCOMMANDE_H

#include <map>
#include "CommandeRobot.h"

class RencontrerPlotCommande : public CommandeRobot {

private:
	Plot p;

public:
	static RencontrerPlotCommande rencontrerPlotCommande;
	
	void execute();
	void desexecute();


	Commande* constructeurVirtuel() {
		return new RencontrerPlotCommande();
	}

	RencontrerPlotCommande() { 
		Commande("RencontrerPlot");
		Commande::nouvelleCommande("RencontrerPlot");
	}
	

};


#endif
