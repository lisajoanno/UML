#include "AfficheurConcret.h"

void AfficheurConcret::miseAJour(EtatRobot* er) {
	cout << "AFFICHEUR : Etat : " << er->getInstance()->getName() << endl;
}