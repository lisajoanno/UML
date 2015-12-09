#include "AvancerCommande.h"

AvancerCommande AvancerCommande::avancerCommande("AVANCER");

AvancerCommande::AvancerCommande() {
	Commande("AVANCER");
}

AvancerCommande::AvancerCommande(string s) {
	nouvelleCommande(s,this);
}

Commande* AvancerCommande::constructeurVirtuel() {
	return new AvancerCommande();
}

// Demande un x et un y à l'invocateur, et fait avancer le robot
void AvancerCommande::execute() {
	x = Invocateur::i->getIn("x");
	y = Invocateur::i->getIn("y");
	Invocateur::i->getRobot()->avancer(x, y);
	Commande::effectuerNouvelleCommande(this);
	avancerCommande.x = x;
	avancerCommande.y = y;
}

// Fait avancer de -x et -y
void AvancerCommande::desexecute() {
	x = avancerCommande.x;
	y = avancerCommande.y;
	Invocateur::i->getRobot()->avancer(-x, -y);
}

