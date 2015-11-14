#include "AVideFacePlot.h"

/**************
  Constructeur
**************/

AVideFacePlot* AVideFacePlot::instance = new AVideFacePlot();

AVideFacePlot* AVideFacePlot::getInstance() {
    return instance;
}

/**************
  Méthodes
**************/

// Reste dans le même état.
EtatRobot AVideFacePlot::evaluerPlot() {
    return AVideFacePlot();
}

// Fait passer dans l'état en charge face plot.
EtatRobot* AVideFacePlot::saisir() {
    return EnChargeFacePlot().getInstance();
}

// Fait passer dans l'état à vide.
EtatRobot* AVideFacePlot::tourner() {
    return AVide().getInstance();
}

// Renvoie le nom de l'état.
string AVideFacePlot::getName() {
	return "A vide face plot";
}