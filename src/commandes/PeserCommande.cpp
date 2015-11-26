#include "PeserCommande.h"

void PeserCommande::execute() {
	robot.peser();
	i->invoquer();
}


void PeserCommande::desexecute() {
}
