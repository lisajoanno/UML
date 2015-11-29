#include "PoserCommande.h"

void PoserCommande::execute(Robot* robot) {
	robot->poser();
	i->invoquer(robot);
}

void PoserCommande::desexecute(Robot* robot) {
	i->invoquer(robot);
}
