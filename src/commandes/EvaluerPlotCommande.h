#ifndef EVALUERPLOTCOMMANDE_H
#define EVALUERPLOTCOMMANDE_H

#include <map>
#include "CommandeRobot.h"

class EvaluerPlotCommande : public CommandeRobot {

public:
	EvaluerPlotCommande() : CommandeRobot("EvaluerPlotCommande") {};
	EvaluerPlotCommande(Invocateur* inv) : CommandeRobot("EvaluerPlotCommande", inv) {};

	void execute(Robot* robot);
	void desexecute(Robot* robot);

};

#endif
