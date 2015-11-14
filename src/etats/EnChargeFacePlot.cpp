#include "EnChargeFacePlot.h"

/**************
  Constructeur
**************/

EnChargeFacePlot* EnChargeFacePlot::instance = new EnChargeFacePlot();

EnChargeFacePlot* EnChargeFacePlot::getInstance() {
    return instance;
}

/**************
  Méthodes
**************/

// Fait passer dans l'état à vide face plot.
EtatRobot* EnChargeFacePlot::poser() {
    return AVideFacePlot().getInstance();
}

// Reste dans le même état.
EtatRobot EnChargeFacePlot::peser() {
    return EnChargeFacePlot();
}

// Reste dans le même état.
EtatRobot EnChargeFacePlot::evaluerPlot() {
    return EnChargeFacePlot();
}

// Fait passer dans l'état en charge.
EtatRobot* EnChargeFacePlot::tourner() {
    return EnCharge().getInstance();
}

// Renvoie le nom de l'état.
string EnChargeFacePlot::getName() {
	return "En charge face plot";
}