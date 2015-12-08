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

void Commande::nouvelleCommande(string s, Commande* com) {
	commandesInscrites()[s] = com->constructeurVirtuel();
}

map<string,Commande*>& Commande::commandesInscrites() {
	static map<string,Commande*>* comInscrites = new map<string,Commande*>;
	return *comInscrites;
}

