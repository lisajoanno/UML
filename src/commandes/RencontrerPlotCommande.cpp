#include "RencontrerPlotCommande.h"

RencontrerPlotCommande RencontrerPlotCommande::rencontrerPlotCommande("RENCONTRERPLOT");

RencontrerPlotCommande::RencontrerPlotCommande() { 
	Commande("RENCONTRERPLOT");
}

RencontrerPlotCommande::RencontrerPlotCommande(string s) {
	nouvelleCommande(s,this);
}

Commande* RencontrerPlotCommande::constructeurVirtuel() {
	return new RencontrerPlotCommande();
}

void RencontrerPlotCommande::execute() {
	p = Plot(Invocateur::i->getIn("Hauteur plot"));
	rencontrerPlotCommande.p = p;
	Invocateur::i->getRobot()->rencontrerPlot(p);
	Commande::effectuerNouvelleCommande(this);
}

void RencontrerPlotCommande::desexecute() {
	p = rencontrerPlotCommande.p;
	Invocateur::i->getRobot()->tourner(Invocateur::i->getRobot()->getDirection());
}
