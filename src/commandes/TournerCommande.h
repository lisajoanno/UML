/**********


**********/

#ifndef TOURNERCOMMANDE_H
#define TOURNERCOMMANDE_H

#include <iostream>
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
	
	void execute();
	void desexecute();

	static TournerCommande tournerCommande;
};

#endif
