/**********


**********/

#ifndef FIGERCOMMANDE_H
#define FIGERCOMMANDE_H

#include <map>
#include "CommandeRobot.h"

using namespace std;

class FigerCommande : public CommandeRobot {

public :
	FigerCommande() : CommandeRobot("FigerCommande") {};
	FigerCommande(Invocateur* inv) : CommandeRobot("FigerCommande", inv) {};
	
	void execute(Robot* robot);
	void desexecute(Robot* robot);

};

#endif
