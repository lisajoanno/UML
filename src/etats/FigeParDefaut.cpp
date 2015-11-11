#include "FigeParDefaut.h"

//FigeParDefaut FigeParDefaut::instance;

EtatRobot* FigeParDefaut::getInstance() {
    return new FigeParDefaut();
}

EtatRobot FigeParDefaut::repartir() {
    return EnRoute();
}
