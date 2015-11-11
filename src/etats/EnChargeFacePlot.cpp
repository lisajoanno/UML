#include "EnChargeFacePlot.h"

EnChargeFacePlot EnChargeFacePlot::instance;

EnChargeFacePlot EnChargeFacePlot::getInstance() {
    return instance;
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

