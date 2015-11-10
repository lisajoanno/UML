#include "FigeParDefaut.h"

#ifndef ETATROBOT_H
#define ETATROBOT_H
#include "EnRoute.h"

FigeParDefaut FigeParDefaut::getInstance() {
    return instance;
}

EtatRobot FigeParDefaut::repartir() {
    return EnRoute();
}
#endif
