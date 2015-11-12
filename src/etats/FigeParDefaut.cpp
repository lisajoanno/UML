#include "FigeParDefaut.h"

FigeParDefaut* FigeParDefaut::instance = new FigeParDefaut();

FigeParDefaut* FigeParDefaut::getInstance() {
    return instance;
}

EtatRobot* FigeParDefaut::repartir() {
    return EnRoute().getInstance();
}
