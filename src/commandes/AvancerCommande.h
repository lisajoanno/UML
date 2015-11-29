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
	AvancerCommande() : CommandeRobot("AvancerCommande") {};
	AvancerCommande(Invocateur* inv) : CommandeRobot("AvancerCommande", inv) {}
	
	void execute(Robot* robot);
	void desexecute(Robot* robot);

	static AvancerCommande avancerCommande;
};

#endif
