#include "EnCharge.h"

//EnCharge EnCharge::instance;

EtatRobot* EnCharge::getInstance() {
    return new EnCharge();
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