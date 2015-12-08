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
	Invocateur::i->invoquer();
}

void RencontrerPlotCommande::desexecute() {
	p = rencontrerPlotCommande.p;
	//robot->rencontrerPlot(p);
	Invocateur::i->invoquer();
}
