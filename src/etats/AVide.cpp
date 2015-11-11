#include "AVide.h"

//AVide AVide::instance;

EtatRobot* AVide::getInstance() {
    return new AVide();
}

EtatRobot AVide::avancer() {
    return AVide();
}

EtatRobot AVide::tourner() {
    return AVide();
}

EtatRobot AVide::rencontrerPlot() {
    return AVideFacePlot();
}
