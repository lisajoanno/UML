#include "TournerCommande.h"

TournerCommande TournerCommande::tournerCommande;

void TournerCommande::execute() {
	tournerCommande.d = robot.getDirection();
	cout << "Direction ? ";
	// ci dessous : convertir int en enum ????
	//d = i->getIn();
	robot.tourner(d);
	i->invoquer();
}

void TournerCommande::desexecute() {
	robot.tourner(tournerCommande.d);
}
