/**********

Classe Commande



**********/

#ifndef COMMANDEROBOT_H
#define COMMANDEROBOT_H

#include <map>
#include "Commande.h"
#include "../Robot.h"
#include "Invocateur.h"

using namespace std;

class CommandeRobot : public Commande {

public :
	Invocateur* i;

public :
	CommandeRobot() {};
	
	CommandeRobot(Invocateur* inv) : i(inv) {};
	
    virtual void execute(Robot* robot) {};
    virtual void desexecute() {};
};

#endif
