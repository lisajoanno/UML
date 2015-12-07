#include "RencontrerPlotCommande.h"

RencontrerPlotCommande RencontrerPlotCommande::rencontrerPlotCommande("RENCONTRERPLOT");

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
