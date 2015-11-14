#ifndef AFFICHEURCONCRET_H
#define AFFICHEURCONCRET_H

#include "Afficheur.h"
class Robot;

class AfficheurConcret : public Afficheur {

private:

public:
	AfficheurConcret() {};

	void miseAJour(Robot* er);
};

#endif