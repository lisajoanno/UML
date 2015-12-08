#include "TournerCommande.h"
#include "../Direction.h"

TournerCommande TournerCommande::tournerCommande("TOURNER");

TournerCommande::TournerCommande() {
	Commande("TOURNER");
}

TournerCommande::TournerCommande(string s) {
	nouvelleCommande(s,this);
}

Commande* TournerCommande::constructeurVirtuel() {
	return new TournerCommande();
}

void TournerCommande::execute() {
	tournerCommande.d = Invocateur::i->getRobot()->getDirection();
	cout << "Direction ? ";
	Invocateur::i->getRobot()->tourner(Direction::getDirection(Invocateur::i->getStr()));
	Invocateur::i->invoquer();
}

void TournerCommande::desexecute() {
	Invocateur::i->getRobot()->tourner(tournerCommande.d);
	Invocateur::i->invoquer();
}
