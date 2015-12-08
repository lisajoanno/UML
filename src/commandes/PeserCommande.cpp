#include "PeserCommande.h"

PeserCommande PeserCommande::peserCommande("PESER");

PeserCommande::PeserCommande() {
	Commande("PESER");
}

PeserCommande::PeserCommande(string s) {
	nouvelleCommande(s,this);
}

Commande* PeserCommande::constructeurVirtuel() {
	return new PeserCommande();
}

void PeserCommande::execute() {
	Invocateur::i->getRobot()->peser();
	Commande::effectuerNouvelleCommande(this);
	Invocateur::i->invoquer();
}

void PeserCommande::desexecute() {
	Invocateur::i->invoquer();
}
