#include "SaisirCommande.h"

SaisirCommande SaisirCommande::saisirCommande("SAISIR");

SaisirCommande::SaisirCommande() {
	Commande("SAISIR");
}

SaisirCommande::SaisirCommande(string s) {
	nouvelleCommande(s,this);
}

Commande* SaisirCommande::constructeurVirtuel() {
	return new SaisirCommande();
}

void SaisirCommande::execute() {
	o = Objet(Invocateur::i->getIn("Objet"));
	saisirCommande.o = o;
	Invocateur::i->getRobot()->saisir(o);
	Commande::effectuerNouvelleCommande(this);
	Invocateur::i->invoquer();
}

void SaisirCommande::desexecute() {
	Invocateur::i->getRobot()->poser();
	Invocateur::i->invoquer();
}
