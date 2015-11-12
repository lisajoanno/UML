#include "EnRoute.h"

EnRoute* EnRoute::instance = new EnRoute();

EtatRobot* EnRoute::getInstance() {
    return instance;
}

EtatRobot EnRoute::figer() {
    return Fige();
}
