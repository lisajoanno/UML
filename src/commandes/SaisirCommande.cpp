#include "SaisirCommande.h"

SaisirCommande SaisirCommande::saisirCommande;

void SaisirCommande::execute(Robot* robot) {
	cout << "Objet ? ";
	o = i->getIn();
	saisirCommande.o = o;
	robot->saisir(o);
	i->invoquer(robot);
}

void SaisirCommande::desexecute(Robot* robot) {
	robot->poser();
	i->invoquer(robot);
}
