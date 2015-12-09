/**********

Classe EvaluerPlotCommande

Commande pour faire evaluer le plot le robot

**********/

#ifndef EVALUERPLOTCOMMANDE_H
#define EVALUERPLOTCOMMANDE_H

#include <map>
#include "CommandeRobot.h"

class EvaluerPlotCommande : public CommandeRobot {

public:
	static EvaluerPlotCommande evaluerPlotCommande;

	EvaluerPlotCommande();
	EvaluerPlotCommande(string s);
	Commande* constructeurVirtuel();

	void execute();
	void desexecute();
};

#endif
