#include "AvancerCommande.h"



void AvancerCommande::execute() {
	robot.avancer(x,y);
}

void AvancerCommande::desexecute() {
	cout << "oijzfr" << endl;
}