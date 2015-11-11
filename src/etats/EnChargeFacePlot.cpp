#include "EnChargeFacePlot.h"

//EnChargeFacePlot EnChargeFacePlot::instance;

EtatRobot* EnChargeFacePlot::getInstance() {
    return new EnChargeFacePlot();
}

EtatRobot EnChargeFacePlot::poser() {
    return AVideFacePlot();
}

EtatRobot EnChargeFacePlot::peser() {
    return EnChargeFacePlot();
}

EtatRobot EnChargeFacePlot::evaluerPlot() {
    return EnChargeFacePlot();
}

EtatRobot EnChargeFacePlot::tourner() {
    return EnCharge();
}

