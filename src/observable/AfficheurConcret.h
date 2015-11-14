#ifndef AFFICHEURCONCRET_H
#define AFFICHEURCONCRET_H

#include "Afficheur.h"

class AfficheurConcret : public Afficheur {

private:

public:
	AfficheurConcret() {};

	void miseAJour(EtatRobot* er);
};

#endif