/**********

Classe Commande



**********/

#ifndef COMMANDE_H
#define COMMANDE_H

#include <map>
#include "../Robot.h"
#include "../RobotException.h"

class Commande {

protected:

public :
	Commande();
	
	static map<string,Commande*> mc;

	virtual void execute();
	virtual void desexecute();

};

#endif
