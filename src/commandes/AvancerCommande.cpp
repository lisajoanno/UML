#include "AvancerCommande.h"

/**
AvancerCommande::AvancerCommande(Invocateur* inv) {
	i = inv;
}
*/

void AvancerCommande::execute() {
	cout << "x ? ";
	x = i->getIn();
	cout << "y ? ";
	y = i->getIn();
	robot.avancer(x, y);
	// Pour continuer à demander des ordres à l'utilisateur
	i->invoquer();
}

void AvancerCommande::desexecute() {
}
