#include "EvaluerPlotCommande.h"

void EvaluerPlotCommande::execute(Robot* robot) {
	robot->evaluerPlot();
	i->invoquer(robot);
}

void EvaluerPlotCommande::desexecute(Robot* robot) {	
	i->invoquer(robot);
}