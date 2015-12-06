#include "Commande.h"

#include "AvancerCommande.h"
#include "RencontrerPlotCommande.h"

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

map<string,Commande*>& Commande::commandesInscrites() {
	static map<string,Commande*>* comInscrites = new map<string,Commande*>;
	return *comInscrites;
}
