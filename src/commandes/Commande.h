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
	
	static map<string,Commande*> mc;

	virtual void execute(Robot* r);
	virtual void desexecute();

};

#endif
