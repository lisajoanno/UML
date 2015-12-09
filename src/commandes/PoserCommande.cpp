#include "PoserCommande.h"
#include "SaisirCommande.h"

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
	Commande::effectuerNouvelleCommande(this);
}

void PoserCommande::desexecute() {
	Invocateur::i->getRobot()->saisir(SaisirCommande::saisirCommande.getObjet());
}
