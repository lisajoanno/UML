#include "RencontrerPlotCommande.h"

RencontrerPlotCommande RencontrerPlotCommande::rencontrerPlotCommande;

void RencontrerPlotCommande::execute(Robot* robot) {
	cout << "Hauteur plot ? ";
	p = i->getIn();
	rencontrerPlotCommande.p = p;
	robot->rencontrerPlot(p);
	i->invoquer(robot);
}

void RencontrerPlotCommande::desexecute(Robot* robot) {
	p = rencontrerPlotCommande.p;
	robot->rencontrerPlot(p);
	i->invoquer(robot);
}
