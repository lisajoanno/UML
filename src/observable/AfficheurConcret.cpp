#include "AfficheurConcret.h"

void AfficheurConcret::miseAJour() {
	cout << "------------" << endl;
	cout << "Ordre reçu : " << robot->getOrdre() << endl;
	cout << "Etat : " << robot->getEtat()->getInstance()->getName() << endl;
	cout << "Position : (" << robot->getPosition().getX() << "," << robot->getPosition().getY() << ")" << endl;
	cout << "Direction : " << Direction::getString(robot->getDirection()) << endl;
	cout << "Poids de mon objet : " << robot->getObjet().getPoids() << endl;
	cout << "Hauteur du plot : " << robot->getPlot().getHauteur() << endl;
	cout << "------------" << endl;
}