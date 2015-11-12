#include "EnCharge.h"

EnCharge* EnCharge::instance = new EnCharge();

EtatRobot* EnCharge::getInstance() {
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