#include "AvancerCommande.h"

AvancerCommande AvancerCommande::avancerCommande;

void AvancerCommande::execute() {	
	cout << "x ? ";
	x = i->getIn();
	cout << "y ? ";
	y = i->getIn();
	i->getRobot()->avancer(x, y);
	avancerCommande.x = x;
	avancerCommande.y = y;
	// Pour continuer à demander des ordres à l'utilisateur
	i->invoquer();
}

void AvancerCommande::desexecute() {
	x = avancerCommande.x;
	y = avancerCommande.y;
	//robot->avancer(-x, -y);
	i->invoquer();
}
