#include "RepartirCommande.h"

RepartirCommande RepartirCommande::repartirCommande("REPARTIR");

RepartirCommande::RepartirCommande() { 
	Commande("REPARTIR");
}

RepartirCommande::RepartirCommande(string s) {
	nouvelleCommande(s,this);
}

Commande* RepartirCommande::constructeurVirtuel() {
	return new RepartirCommande();
}

void RepartirCommande::execute() {
	Invocateur::i->getRobot()->repartir();
	Commande::effectuerNouvelleCommande(this);
	Invocateur::i->invoquer();
}

void RepartirCommande::desexecute() {
	Invocateur::i->getRobot()->figer();
	Invocateur::i->invoquer();
}
