#include "Commande.h"

#include "AvancerCommande.h"

map<string,Commande*> Commande::mc = { {"AVANCER", new AvancerCommande()} };

Commande::Commande() {
	
}

void Commande::execute() {
	throw RobotException();
}

void Commande::desexecute() {
	throw RobotException();
}

