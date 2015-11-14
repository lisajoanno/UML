#ifndef AFFICHEUR_H
#define AFFICHEUR_H

#include "../EtatRobot.h"
#include "../RobotException.h"

class Afficheur {

private:

public:
	Afficheur() {};

	virtual void miseAJour(EtatRobot* er);
};

#endif