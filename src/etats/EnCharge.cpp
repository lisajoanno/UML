#include "EnCharge.h"

/**************
  Constructeur
**************/

EnCharge* EnCharge::instance = new EnCharge();

EnCharge* EnCharge::getInstance() {
    return instance;
}

/**************
  Méthodes
**************/

// Reste dans le même état.
EtatRobot EnCharge::avancer() {
    return EnCharge();
}

// Reste dans le même état.
EtatRobot* EnCharge::tourner() {
    return EnCharge().getInstance();
}

// Reste dans le même état.
EtatRobot EnCharge::peser() {
    return EnCharge();
}

// Fait passer dans l'état à en charge face plot.
EtatRobot* EnCharge::rencontrerPlot() {
    return EnChargeFacePlot().getInstance();
}

// Renvoie le nom de l'état.
string EnCharge::getName() {
	return "En charge";
}