#include "FigeParDefaut.h"

FigeParDefaut* FigeParDefaut::instance = new FigeParDefaut();

EtatRobot* FigeParDefaut::getInstance() {
    return instance;
}

EtatRobot FigeParDefaut::repartir() {
    return EnRoute();
}
