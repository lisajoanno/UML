#ifndef AFFICHEURCONCRET_H
#define AFFICHEURCONCRET_H

#include "Afficheur.h"
class Robot;

class AfficheurConcret : public Afficheur {

private:
	Robot* robot;
public:
	AfficheurConcret(Robot* er) : robot(er) {};

	void miseAJour();
};

#endif