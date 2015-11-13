#ifndef FIGE_H
#define FIGE_H

#include "EnRoute.h"
#include "../EtatRobot.h"

class Fige : public EtatRobot {

private:
	static Fige* instance;
public:
	Fige() {};
	Fige* getInstance();
	string getName();

    EtatRobot* repartir();
};

#endif
