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
	cout << "Hauteur plot ? ";
	p = Plot(Invocateur::i->getIn());
	rencontrerPlotCommande.p = p;
	Invocateur::i->getRobot()->rencontrerPlot(p);
	Commande::effectuerNouvelleCommande(this);
	Invocateur::i->invoquer();
}

void RencontrerPlotCommande::desexecute() {
	p = rencontrerPlotCommande.p;
	cout << "dese de rencontrerplot" << endl;
	Invocateur::i->getRobot()->tourner(Invocateur::i->getRobot()->getDirection());
	Invocateur::i->invoquer();
}
