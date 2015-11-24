#include "AvancerCommande.h"

AvancerCommande::AvancerCommande(Invocateur* inv) {
	cout << "x ? ";
	x = inv->getIn();
	cout << "y ? ";
	y = inv->getIn();
	robot.avancer(x, y);
}

void AvancerCommande::execute() {
	robot.avancer(2,3);
}

void AvancerCommande::desexecute() {
}
