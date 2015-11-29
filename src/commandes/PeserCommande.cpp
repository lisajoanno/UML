#include "PeserCommande.h"

void PeserCommande::execute(Robot* robot) {
	robot->peser();
	i->invoquer(robot);
}


void PeserCommande::desexecute(Robot* robot) {
	i->invoquer(robot);
}
