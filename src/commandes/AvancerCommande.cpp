#include "AvancerCommande.h"
#include "../Robot.h"

AvancerCommande AvancerCommande::avancerCommande;

void AvancerCommande::execute() {	
	cout << "x ? ";
	x = Invocateur::i->getIn();
	cout << "y ? ";
	y = Invocateur::i->getIn();
	Robot* rt = Invocateur::i->getRobot();
	rt->avancer(x, y);
	avancerCommande.x = x;
	avancerCommande.y = y;
	// Pour continuer à demander des ordres à l'utilisateur
	Invocateur::i->invoquer();
}

void AvancerCommande::desexecute() {
	x = avancerCommande.x;
	y = avancerCommande.y;
	//robot->avancer(-x, -y);
	i->invoquer();
}

