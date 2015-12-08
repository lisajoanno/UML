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

void DesexecuterCommande::execute() {
	Invocateur::i->getRobot();
	// Desexecute la dernière commande
	Commande::commandesEffectuees->back()->desexecute();
	// Efface la dernière commande ? Pourquoi pas ? 
	Commande::commandesEffectuees->pop_back();
	// Pour continuer à demander des ordres à l'utilisateur
}

void DesexecuterCommande::desexecute() {
	Invocateur::i->invoquer();
}

