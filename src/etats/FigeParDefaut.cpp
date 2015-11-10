#include "FigeParDefaut.h"

FigeParDefaut FigeParDefaut::getInstance() {
    return instance;
}

EtatRobot FigeParDefaut::repartir() {
    return EnRoute();
}
