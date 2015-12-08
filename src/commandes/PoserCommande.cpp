#include "PoserCommande.h"

PoserCommande PoserCommande::poserCommande("POSER");

PoserCommande::PoserCommande() {
	Commande("POSER");
}

PoserCommande::PoserCommande(string s) {
	nouvelleCommande(s,this);
}

Commande* PoserCommande::constructeurVirtuel() {
	return new PoserCommande();
}

void PoserCommande::execute() {
	Invocateur::i->getRobot()->poser();
	Invocateur::i->invoquer();
}

void PoserCommande::desexecute() {
	Invocateur::i->invoquer();
}
