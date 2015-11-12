#include "Fige.h"

Fige* Fige::instance = new Fige();

EtatRobot* Fige::getInstance() {
    return instance;
}