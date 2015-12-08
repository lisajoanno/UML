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
	cout << "x ? ";
	x = Invocateur::i->getIn();
	cout << "y ? ";
	y = Invocateur::i->getIn();
	Invocateur::i->getRobot()->avancer(x, y);
	Commande::effectuerNouvelleCommande(this);
	avancerCommande.x = x;
	avancerCommande.y = y;
	// Pour continuer à demander des ordres à l'utilisateur
	Invocateur::i->invoquer();
}

void AvancerCommande::desexecute() {
	x = avancerCommande.x;
	y = avancerCommande.y;
	Invocateur::i->getRobot()->avancer(-x, -y);
	Invocateur::i->invoquer();
}

