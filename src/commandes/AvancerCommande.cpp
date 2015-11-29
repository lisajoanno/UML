#include "AvancerCommande.h"

AvancerCommande AvancerCommande::avancerCommande;

void AvancerCommande::execute(Robot* robot) {	
	cout << "x ? ";
	x = i->getIn();
	cout << "y ? ";
	y = i->getIn();
	robot->avancer(x, y);
	avancerCommande.x = x;
	avancerCommande.y = y;
	// Pour continuer à demander des ordres à l'utilisateur
	i->invoquer(robot);
}

void AvancerCommande::desexecute(Robot* robot) {
	x = avancerCommande.x;
	y = avancerCommande.y;
	robot->avancer(-x, -y);
	i->invoquer(robot);
}
