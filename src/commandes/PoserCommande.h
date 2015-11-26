/**********


**********/

#ifndef POSERCOMMANDE_H
#define POSERCOMMANDE_H

#include <map>
#include "CommandeRobot.h"

using namespace std;

class PoserCommande : public CommandeRobot {
	
public :
	PoserCommande() : CommandeRobot("PoserCommande") {};
	PoserCommande(Invocateur* inv) : CommandeRobot("PoserCommande", inv) {};
	
	void execute();
	void desexecute();

};

#endif
