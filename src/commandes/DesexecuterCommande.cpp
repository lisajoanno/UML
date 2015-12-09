#include "DesexecuterCommande.h"
#include <vector>

DesexecuterCommande DesexecuterCommande::desexecuterCommande("DESEXECUTER");

DesexecuterCommande::DesexecuterCommande() {
	Commande("DESEXECUTER");
}

DesexecuterCommande::DesexecuterCommande(string s) {
	nouvelleCommande(s,this);
}

Commande* DesexecuterCommande::constructeurVirtuel() {
	return new DesexecuterCommande();
}

// Desexecute la dernière commande du vecteur des commandes effectuées de Commande
void DesexecuterCommande::execute() {
	Invocateur::i->getRobot();
	// Desexecute la dernière commande
	Commande::commandesEffectuees->back()->desexecute();
	Commande::commandesEffectuees->pop_back();
}

// Rien à faire ici
void DesexecuterCommande::desexecute() {
	Invocateur::i->invoquer();
}

