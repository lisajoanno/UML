#include "Commande.h"

#include "AvancerCommande.h"

Commande::Commande() {
	map<string,Commande*> mc = { {"AVANCER", new AvancerCommande()} };
}

void Commande::execute() {
	throw RobotException();
}

void Commande::desexecute() {
	throw RobotException();
}

