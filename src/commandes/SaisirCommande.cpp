#include "SaisirCommande.h"

SaisirCommande SaisirCommande::saisirCommande;

void SaisirCommande::execute() {
	cout << "Objet ? ";
	o = i->getIn();
	saisirCommande.o = o;
	robot.saisir(o);
	i->invoquer();
}

void SaisirCommande::desexecute() {
	robot.poser();
}
