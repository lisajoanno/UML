#include "EnCharge.h"

#ifndef ETATROBOT_H
#define ETATROBOT_H
#include "EnChargeFacePlot.h"

AVide EnCharge::getInstance() {
    return instance;
}

EtatRobot EnCharge::avancer() {
    return EnCharge();
}

EtatRobot EnCharge::tourner() {
    return EnCharge();
}

EtatRobot EnCharge::peser() {
    return EnCharge();
}

EtatRobot EnCharge::rencontrerPlot() {
    return EnChargeFacePlot();
}

#endif
