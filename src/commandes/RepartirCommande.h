/**********


**********/

#ifndef REPARTIRCOMMANDE_H
#define REPARTIRCOMMANDE_H

#include <map>
#include "CommandeRobot.h"

using namespace std;

class RepartirCommande : public CommandeRobot {

public :
	RepartirCommande() : CommandeRobot("RepartirCommande") {};
	RepartirCommande(Invocateur* inv) : CommandeRobot("RepartirCommande", inv) {};
	
	void execute();
	void desexecute();

};

#endif
