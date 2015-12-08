#include "Afficheur.h"

/**************
  Méthodes
**************/

// Implémentée dans les sous classes de l'interface Afficheur
void Afficheur::miseAJour() {
	throw RobotException();
}

void Afficheur::afficherMessage(string s) {
	throw RobotException();
}
