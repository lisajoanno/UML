#include "FigerCommande.h"

FigerCommande FigerCommande::figerCommande("FIGER");

FigerCommande::FigerCommande() {
	Commande("FIGER");
}

FigerCommande::FigerCommande(string s) {
	nouvelleCommande(s,this);
}

Commande* FigerCommande::constructeurVirtuel() {
	return new FigerCommande();
}

void FigerCommande::execute() {
	Invocateur::i->getRobot()->figer();
	Commande::effectuerNouvelleCommande(this);
	Invocateur::i->invoquer();
}

void FigerCommande::desexecute() {
	Invocateur::i->getRobot()->repartir();
	Invocateur::i->invoquer();
}
