/**********


**********/

#ifndef AVANCERCOMMANDE_H
#define AVANCERCOMMANDE_H

#include <map>
#include "CommandeRobot.h"

using namespace std;

class AvancerCommande : public CommandeRobot {

private :
	int x, y;
	
public :
	AvancerCommande(Invocateur* inv) : CommandeRobot("AvancerCommande", inv) {};
	AvancerCommande() : CommandeRobot("AvancerCommande") {};
	//AvancerCommande(Invocateur* inv);
	
	void execute();
	void desexecute();

	static AvancerCommande avancerCommande;
};

#endif
