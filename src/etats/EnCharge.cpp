#include "EnCharge.h"

EnCharge EnCharge::getInstance() {
    return instance;
}

EtatRobot EnCharge::avancer() {
	cout << "halo?" << endl;
    return EnCharge();
}

EtatRobot EnCharge::tourner() {
    return EnCharge();
}

EtatRobot EnCharge::peser() {
    return EnCharge();
}

EtatRobot EnCharge::rencontrerPlot() {
    return EnChargeFacePlot();
}