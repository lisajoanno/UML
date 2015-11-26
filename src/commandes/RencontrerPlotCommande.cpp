#include "RencontrerPlotCommande.h"

RencontrerPlotCommande RencontrerPlotCommande::rencontrerPlotCommande;

void RencontrerPlotCommande::execute() {
	cout << "Hauteur plot ? ";
	p = i->getIn();
	rencontrerPlotCommande.p = p;
	robot.rencontrerPlot(p);
	i->invoquer();
}

void RencontrerPlotCommande::desexecute() {
	p = rencontrerPlotCommande.p;
	robot.rencontrerPlot(p);
}
