#ifndef ENROUTE_H
#define ENROUTE_H

#include "../EtatRobot.h"
#include "Fige.h"

class EnRoute : public EtatRobot {

private:
   	static EnRoute* instance;
public:
  	EnRoute() {};
    EnRoute* getInstance();
    string getName();
        
    EtatRobot* figer();
};

#endif
