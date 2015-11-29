#include "TournerCommande.h"

TournerCommande TournerCommande::tournerCommande;

void TournerCommande::execute(Robot* robot) {
	tournerCommande.d = robot->getDirection();
	cout << "Direction ? ";
	// ci dessous : convertir int en enum ????
	//d = i->getIn();
	robot->tourner(d);
	i->invoquer(robot);
}

void TournerCommande::desexecute(Robot* robot) {
	robot->tourner(tournerCommande.d);
	i->invoquer(robot);
}
