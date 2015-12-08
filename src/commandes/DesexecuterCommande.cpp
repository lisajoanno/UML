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
	cout << "Désexecutons !" << endl;

	Commande::commandesEffectuees->back()->desexecute();

	// Pour continuer à demander des ordres à l'utilisateur
	Invocateur::i->invoquer();
}

void DesexecuterCommande::desexecute() {
	Invocateur::i->invoquer();
}

