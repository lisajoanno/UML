#include "AVideFacePlot.h"

AVideFacePlot* AVideFacePlot::instance = new AVideFacePlot();

EtatRobot* AVideFacePlot::getInstance() {
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
