#include "EnChargeFacePlot.h"

EnChargeFacePlot* EnChargeFacePlot::instance = new EnChargeFacePlot();

EtatRobot* EnChargeFacePlot::getInstance() {
    return instance;
}

EtatRobot* EnChargeFacePlot::poser() {
    return AVideFacePlot().getInstance();
}

EtatRobot EnChargeFacePlot::peser() {
    return EnChargeFacePlot();
}

EtatRobot EnChargeFacePlot::evaluerPlot() {
    return EnChargeFacePlot();
}

EtatRobot* EnChargeFacePlot::tourner() {
    return EnCharge().getInstance();
}

