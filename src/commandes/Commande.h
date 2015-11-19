/**********

Classe Commande



**********/

#ifndef COMMANDE_H
#define COMMANDE_H

#include "../Robot.h"
#include "../RobotException.h"

class Commande {

private :

public :
	virtual void execute();
	virtual void desexecute();
};

#endif