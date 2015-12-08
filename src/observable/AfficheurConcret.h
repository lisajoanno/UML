/**********

Classe AfficheurConcret

Classe qui hérite d'afficheur. C'est l'afficheur de notre simulation de robot sur la sortie standard. Elle affiche simplement l'ordre reçu, l'état courant du robot, sa position, sa direction, son plot et l'objet qu'il porte.

**********/

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
	void afficherMessage(string s);
};

#endif
