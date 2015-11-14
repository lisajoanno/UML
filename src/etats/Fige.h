/**********

Classe Fige

Cette classe est un singleton modélise un état possible du robot. 
Dans cet état, le robot peut repartir (ce qui l'amène à EnRoute).

**********/

#ifndef FIGE_H
#define FIGE_H

#include "EnRoute.h"
#include "../EtatRobot.h"

class Fige : public EtatRobot {

private:
	static Fige* instance;
public:
	Fige() {};
	static Fige* getInstance();
	string getName();

    EtatRobot* repartir();
};

#endif
