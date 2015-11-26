#ifndef PESERCOMMANDE_H
#define PESERCOMMANDE_H

#include "CommandeRobot.h"

using namespace std;

class PeserCommande : public CommandeRobot {

public :
	PeserCommande() : CommandeRobot("PeserCommande") {};
	PeserCommande(Invocateur* inv) : CommandeRobot("PeserCommande", inv) {};
	
	void execute();
	void desexecute();

};


#endif
