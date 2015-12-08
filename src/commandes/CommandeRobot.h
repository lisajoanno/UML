/**********


**********/

#ifndef COMMANDEROBOT_H
#define COMMANDEROBOT_H

#include <map>
#include "Commande.h"
#include "../Robot.h"
#include "Invocateur.h"

using namespace std;

class CommandeRobot : public Commande {

public:

public:
	virtual void execute() {};
    virtual void desexecute() {};
};

#endif
