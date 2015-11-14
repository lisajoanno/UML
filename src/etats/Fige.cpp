#include "Fige.h"

/**************
  Constructeur
**************/

Fige* Fige::instance = new Fige();

Fige* Fige::getInstance() {
    return instance;
}

/**************
  Méthodes
**************/

// Fait passer dans l'état repartir.
EtatRobot* Fige::repartir() {
    return EnRoute().getInstance();
}

// Renvoie le nom de l'état.
string Fige::getName() {
	return "Figé";
}