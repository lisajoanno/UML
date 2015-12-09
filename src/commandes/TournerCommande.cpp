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

// Demande la direction à l'invocateur, puis fait tourner le robot dans la bonne direction
void TournerCommande::execute() {
	tournerCommande.d = Invocateur::i->getRobot()->getDirection();
	Invocateur::i->getRobot()->tourner(Direction::getDirection(Invocateur::i->getStr("Direction")));
	Commande::effectuerNouvelleCommande(this);
}

// Fait tourner dans la dernière direction le robot
void TournerCommande::desexecute() {
	Invocateur::i->getRobot()->tourner(tournerCommande.d);
}
