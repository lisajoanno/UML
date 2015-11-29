/**********


**********/

#ifndef SAISIRCOMMANDE_H
#define SAISIRCOMMANDE_H

#include <map>
#include "CommandeRobot.h"

using namespace std;

class SaisirCommande : public CommandeRobot {

private :
	Objet o;
	
public :
	SaisirCommande() : CommandeRobot("SaisirCommande") {};
	SaisirCommande(Invocateur* inv) : CommandeRobot("SaisirCommande", inv) {};
	
	void execute(Robot* robot);
	void desexecute(Robot* robot);

	static SaisirCommande saisirCommande;
};

#endif
