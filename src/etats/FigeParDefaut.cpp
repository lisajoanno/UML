#include "FigeParDefaut.h"

FigeParDefaut FigeParDefaut::instance;

FigeParDefaut FigeParDefaut::getInstance() {
    return instance;
}

EtatRobot FigeParDefaut::repartir() {
    return EnRoute();
}
