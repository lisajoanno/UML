#include "FigerCommande.h"

void FigerCommande::execute(Robot* robot) {
	robot->figer();
	i->invoquer(robot);
}

void FigerCommande::desexecute(Robot* robot) {
	robot->repartir();
	i->invoquer(robot);
}
