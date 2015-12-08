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
	cout << "Objet ? ";
	o = Objet(Invocateur::i->getIn());
	saisirCommande.o = o;
	Invocateur::i->getRobot()->saisir(o);
	Invocateur::i->invoquer();
}

void SaisirCommande::desexecute() {
	Invocateur::i->getRobot()->poser();
	Invocateur::i->invoquer();
}
