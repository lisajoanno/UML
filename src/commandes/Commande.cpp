#include "Commande.h"

Commande::Commande() {
}

Commande::Commande(string s) {
	commandesInscrites()[s] = this;
}

void Commande::execute() {
	throw RobotException();
}

void Commande::desexecute() {
	throw RobotException();
}

Commande* Commande::nouvelleCommande(string s) {
	return commandesInscrites()[s]->constructeurVirtuel();
}

// voué à peut être remplacer nouvelleCommande ?
void Commande::enregNouvCommande(string s, Commande* com) {
	commandesInscrites()[s] = com;
}

map<string,Commande*>& Commande::commandesInscrites() {
	static map<string,Commande*>* comInscrites = new map<string,Commande*>;
	return *comInscrites;
}

