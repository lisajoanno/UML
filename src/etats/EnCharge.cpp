#include "EnCharge.h"

EnCharge* EnCharge::instance = new EnCharge();

EnCharge* EnCharge::getInstance() {
    return instance;
}

EtatRobot EnCharge::avancer() {
    return EnCharge();
}

EtatRobot* EnCharge::tourner() {
    return EnCharge().getInstance();
}

EtatRobot EnCharge::peser() {
    return EnCharge();
}

EtatRobot* EnCharge::rencontrerPlot() {
    return EnChargeFacePlot().getInstance();
}

string EnCharge::getName() {
	return "En charge";
}