#include "Fige.h"

Fige* Fige::instance = new Fige();

Fige* Fige::getInstance() {
    return instance;
}

EtatRobot* Fige::repartir() {
    return EnRoute().getInstance();
}

string Fige::getName() {
	return "Figé";
}