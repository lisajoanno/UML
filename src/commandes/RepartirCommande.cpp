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

// Fait repartir le robot
void RepartirCommande::execute() {
	Invocateur::i->getRobot()->repartir();
	Commande::effectuerNouvelleCommande(this);
}

// Fige le robot
void RepartirCommande::desexecute() {
	Invocateur::i->getRobot()->figer();
}
