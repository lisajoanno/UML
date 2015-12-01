#include "TournerCommande.h"
#include "../Direction.h"
#include <iostream>

TournerCommande TournerCommande::tournerCommande;

void TournerCommande::execute(Robot* robot) {
	tournerCommande.d = robot->getDirection();
	cout << "Direction ? ";
	robot->tourner(Direction::getDirection(i->getStr()));
	i->invoquer(robot);
}

void TournerCommande::desexecute(Robot* robot) {
	robot->tourner(tournerCommande.d);
	i->invoquer(robot);
}
