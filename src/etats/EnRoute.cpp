#include "EnRoute.h"

EnRoute* EnRoute::instance = new EnRoute();

EnRoute* EnRoute::getInstance() {
    return instance;
}

EtatRobot* EnRoute::figer() {
    return Fige().getInstance();
}
