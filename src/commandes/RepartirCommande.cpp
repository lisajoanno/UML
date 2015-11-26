#include "RepartirCommande.h"

void RepartirCommande::execute() {
	robot.repartir();
	i->invoquer();
}

void RepartirCommande::desexecute() {
	robot.figer();
}
