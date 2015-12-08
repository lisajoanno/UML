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
	virtual void nouvelleCommande(string s, Commande* com);

	Commande();
	Commande(string s);
	virtual Commande* constructeurVirtuel() {};

	virtual void execute();
	virtual void desexecute();
};

#endif
