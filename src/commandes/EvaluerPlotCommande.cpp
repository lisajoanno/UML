#include "EvaluerPlotCommande.h"

EvaluerPlotCommande EvaluerPlotCommande::evaluerPlotCommande("EVALUERPLOT");

EvaluerPlotCommande::EvaluerPlotCommande() {
	Commande("EVALUERPLOT");
}

EvaluerPlotCommande::EvaluerPlotCommande(string s) {
	nouvelleCommande(s,this);
}

Commande* EvaluerPlotCommande::constructeurVirtuel() {
	return new EvaluerPlotCommande();
}

void EvaluerPlotCommande::execute() {
	Invocateur::i->getRobot()->evaluerPlot();
	Invocateur::i->invoquer();
}

void EvaluerPlotCommande::desexecute() {	
	Invocateur::i->invoquer();
}
