#include "AVideFacePlot.h"

#ifndef ETATROBOT_H
#define ETATROBOT_H
#include "AVide.h"
#include "EnChargeFacePlot.h"

AVideFacePlot AVideFacePlot::getInstance() {
    return instance;
}

EtatRobot AVideFacePlot::evaluerPlot() {
    return AVideFacePlot();
}

EtatRobot AVideFacePlot::saisir() {
    return EnChargeFacePlot();
}

EtatRobot AVideFacePlot::tourner() {
    return AVide();
}

#endif
