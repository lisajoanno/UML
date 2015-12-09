/**********

Classe CommandeRobot

Interface de toutes les commandes relatives au robot.

**********/

#ifndef COMMANDEROBOT_H
#define COMMANDEROBOT_H

#include <map>
#include "Commande.h"
#include "../Robot.h"

using namespace std;

class CommandeRobot : public Commande {

public:

public:
	virtual void execute() {};
    virtual void desexecute() {};
};

#endif
