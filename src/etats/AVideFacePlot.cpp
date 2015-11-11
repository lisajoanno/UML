#include "AVideFacePlot.h"

//AVideFacePlot AVideFacePlot::instance;

EtatRobot* AVideFacePlot::getInstance() {
    return new AVideFacePlot();
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
