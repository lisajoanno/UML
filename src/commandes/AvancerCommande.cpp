#include "AvancerCommande.h"

AvancerCommande::AvancerCommande(Invocateur* inv) {
	i = inv;
}

void AvancerCommande::execute() {
	cout << "x ? ";
	x = i->getIn();
	cout << "y ? ";
	y = i->getIn();
	robot.avancer(x, y);
}

void AvancerCommande::desexecute() {
}
