#include "AVide.h"

AVide* AVide::instance = new AVide();

EtatRobot* AVide::getInstance() {
    return instance;
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
