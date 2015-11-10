#include "EnChargeFacePlot.h"

#ifndef ETATROBOT_H
#define ETATROBOT_H
#include "AVideFacePlot.h"
#include "EnCharge.h"

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

#endif
