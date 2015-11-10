#include "AVide.h"

#ifndef ETATROBOT_H
#define ETATROBOT_H
#include "AVideFacePlot.h"

AVide AVide::getInstance() {
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

#endif
