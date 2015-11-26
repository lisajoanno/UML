#include "FigerCommande.h"

void FigerCommande::execute() {
	robot.figer();
	i->invoquer();
}

void FigerCommande::desexecute() {
	robot.repartir();
}
