#include "Commande.h"

Commande::Commande() {
}

Commande::Commande(string s) {
	commandesInscrites()[s] = this;
}

void Commande::nouvelleCommande(string s, Commande* com) {
	commandesInscrites()[s] = com->constructeurVirtuel();
}

Commande* Commande::constructeurVirtuel() {
	return NULL;
}

map<string,Commande*>& Commande::commandesInscrites() {
	static map<string,Commande*>* comInscrites = new map<string,Commande*>;
	return *comInscrites;
}

vector<Commande*>* Commande::commandesEffectuees = new vector<Commande*>;

vector<Commande*>& Commande::effectuerNouvelleCommande(Commande* com) {
	commandesEffectuees->push_back(com);
	return *commandesEffectuees;
}

void Commande::execute() {
	throw RobotException();
}

void Commande::desexecute() {
	throw RobotException();
}

