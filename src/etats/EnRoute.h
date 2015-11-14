/**********

Classe EnRoute

Cette classe est un singleton modélise un état possible du robot.
Dans cet état, le robot peut se figer (ce qui l'amène à Fige).

**********/

#ifndef ENROUTE_H
#define ENROUTE_H

#include "../EtatRobot.h"
#include "Fige.h"

class EnRoute : public EtatRobot {

private:
   	static EnRoute* instance;
public:
  	EnRoute() {};
    static EnRoute* getInstance();
    string getName();
        
    EtatRobot* figer();
};

#endif
