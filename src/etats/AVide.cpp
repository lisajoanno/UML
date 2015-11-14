#include "AVide.h"

/**************
  Constructeur
**************/

AVide* AVide::instance = new AVide();

AVide* AVide::getInstance() {
    return instance;
}

/**************
  Méthodes
**************/

// Reste dans le même état.
EtatRobot AVide::avancer() {
    return AVide();
}

// Reste dans le même état.
EtatRobot* AVide::tourner() {
    return AVide().getInstance();
}

// Fait passer dans l'état à vide face plot.
EtatRobot* AVide::rencontrerPlot() {
    return AVideFacePlot().getInstance();
}

// Renvoie le nom de l'état.
string AVide::getName() {
	return "A vide";
}