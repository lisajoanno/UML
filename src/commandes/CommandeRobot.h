/**********

Classe Commande



**********/

#ifndef COMMANDEROBOT_H
#define COMMANDEROBOT_H

#include <map>
#include "Commande.h"
#include "../Robot.h"

using namespace std;

class CommandeRobot : public Commande {

private :
	Robot robot;

public :
    virtual void execute();
    virtual void desexecute();
};

#endif