#include "PoserCommande.h"

void PoserCommande::execute() {
	robot.poser();
	i->invoquer();
}

void PoserCommande::desexecute() {
}
