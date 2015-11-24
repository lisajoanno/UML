/**********

Classe Commande



**********/

#ifndef COMMANDEROBOT_H
#define COMMANDEROBOT_H

#include <map>
#include "Commande.h"
#include "../Robot.h"

using namespace std;

class Invocateur;

class CommandeRobot : public Commande {

public :
	Robot robot;
	Invocateur* i;

public :
	CommandeRobot() {};

	CommandeRobot(Invocateur* inv) : i(inv) {};

    virtual void execute();
    virtual void desexecute();
};

#endif
