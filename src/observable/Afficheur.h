/**********

Classe Afficheur

Interface des afficheurs de la simulation du robot. La seule méthode, miseAJour(), sera implémentée dans les sous classes, et affichera le contenu du robot.

**********/

#ifndef AFFICHEUR_H
#define AFFICHEUR_H

#include "../RobotException.h"
#include "../Robot.h"

class Afficheur {

private:

public:
	Afficheur() {};

	virtual void miseAJour();
	virtual void afficherMessage(string s);
};

#endif