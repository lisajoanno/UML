#ifndef RENCONTRERPLOTCOMMANDE_H
#define RENCONTRERPLOTCOMMANDE_H

#include <map>
#include "CommandeRobot.h"

class RencontrerPlotCommande : public CommandeRobot {

private:
	Plot p;

public:
	RencontrerPlotCommande() : CommandeRobot("RencontrerPlotCommande") {};
	RencontrerPlotCommande(Invocateur* inv) : CommandeRobot("RencontrerPlotCommande", inv) {};

	void execute();
	void desexecute();

	static RencontrerPlotCommande rencontrerPlotCommande;

};


#endif
