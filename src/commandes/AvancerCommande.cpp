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

void AvancerCommande::execute() {
	x = Invocateur::i->getIn("x");
	y = Invocateur::i->getIn("y");
	Invocateur::i->getRobot()->avancer(x, y);
	Commande::effectuerNouvelleCommande(this);
	avancerCommande.x = x;
	avancerCommande.y = y;
}

void AvancerCommande::desexecute() {
	x = avancerCommande.x;
	y = avancerCommande.y;
	Invocateur::i->getRobot()->avancer(-x, -y);
}

