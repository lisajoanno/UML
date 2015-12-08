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
	static TournerCommande tournerCommande;

	TournerCommande();
	TournerCommande(string s);
	Commande* constructeurVirtuel();

	void execute();
	void desexecute();
};

#endif
