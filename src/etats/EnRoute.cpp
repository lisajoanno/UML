#include "EnRoute.h"

/**************
  Constructeur
**************/

EnRoute* EnRoute::instance = new EnRoute();

EnRoute* EnRoute::getInstance() {
    return instance;
}

/**************
  Méthodes
**************/

// Fait passer dans l'état figé.
EtatRobot* EnRoute::figer() {
    return Fige().getInstance();
}

// Renvoie le nom de l'état.
string EnRoute::getName() {
	return "En route";
}