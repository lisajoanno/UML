#include "AvancerCommande.h"
#include "../Robot.h"

AvancerCommande AvancerCommande::avancerCommande;

void AvancerCommande::execute() {	
	cout << "x ? ";
	x = i->getIn();
	cout << "y ? ";
	y = i->getIn();
	Robot* rt = i->getRobot();
	cout << "ici" << endl;
	rt->avancer(x, y);
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

