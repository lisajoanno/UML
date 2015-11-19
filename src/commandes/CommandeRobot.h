/**********

Classe Commande



**********/

#ifndef COMMANDEROBOT_H
#define COMMANDEROBOT_H

#include <map>
#include "Commande.h"

using namespace std;

class CommandeRobot : public Commande {

private :

public :
    void execute();
    void desexecute();

};

#endif