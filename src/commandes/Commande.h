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
	Commande();

	virtual void execute();
	virtual void desexecute();

	static map<string,Commande*>& commandesInscrites();

	static Commande* nouvelleCommande(string s);
	virtual Commande* constructeurVirtuel() {};
};

#endif
