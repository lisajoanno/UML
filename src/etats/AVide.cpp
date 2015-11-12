#include "AVide.h"

AVide* AVide::instance = new AVide();

AVide* AVide::getInstance() {
    return instance;
}

EtatRobot AVide::avancer() {
    return AVide();
}

EtatRobot* AVide::tourner() {
    return AVide().getInstance();
}

EtatRobot* AVide::rencontrerPlot() {
    return AVideFacePlot().getInstance();
}

string AVide::getName() {
	return "A vide";
}