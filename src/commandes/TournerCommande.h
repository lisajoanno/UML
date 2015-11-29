/**********


**********/

#ifndef TOURNERCOMMANDE_H
#define TOURNERCOMMANDE_H

#include <map>
#include "CommandeRobot.h"
#include "../Direction.h"

using namespace std;

class TournerCommande : public CommandeRobot {

private :
	Direction::ENDirection d;
	
public :
	TournerCommande() : CommandeRobot("TournerCommande") {};
	TournerCommande(Invocateur* inv) : CommandeRobot("TournerCommande", inv) {};
	
	void execute(Robot* robot);
	void desexecute(Robot* robot);

	static TournerCommande tournerCommande;
};

#endif
