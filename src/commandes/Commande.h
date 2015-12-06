/**********

Classe Commande



**********/

#ifndef COMMANDE_H
#define COMMANDE_H

#include <map>
#include "../Robot.h"
#include "../RobotException.h"

class Commande {
	
public :
	static map<string,Commande*>& commandesInscrites();
	static Commande* nouvelleCommande(string s);

	Commande();
	Commande(string s);

	virtual void execute();
	virtual void desexecute();

	virtual Commande* constructeurVirtuel() {};
};

#endif
