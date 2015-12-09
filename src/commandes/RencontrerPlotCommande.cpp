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

// Demande la hauteur du plot à l'invocateur et crée un plot, puis fait rencontrer au robot le plot
void RencontrerPlotCommande::execute() {
	p = Plot(Invocateur::i->getIn("Hauteur plot"));
	rencontrerPlotCommande.p = p;
	Invocateur::i->getRobot()->rencontrerPlot(p);
	Commande::effectuerNouvelleCommande(this);
}

// Fait tourner dans la même direction pour faire dé-rencontrer le plot
void RencontrerPlotCommande::desexecute() {
	p = rencontrerPlotCommande.p;
	Invocateur::i->getRobot()->tourner(Invocateur::i->getRobot()->getDirection());
}
