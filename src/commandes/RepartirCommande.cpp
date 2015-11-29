#include "RepartirCommande.h"

void RepartirCommande::execute(Robot* robot) {
	robot->repartir();
	i->invoquer(robot);
}

void RepartirCommande::desexecute(Robot* robot) {
	robot->figer();
}
