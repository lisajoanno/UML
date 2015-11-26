#include "EvaluerPlotCommande.h"

void EvaluerPlotCommande::execute() {
	robot.evaluerPlot();
	i->invoquer();
}

void EvaluerPlotCommande::desexecute() {	
}
