#include "AfficheurConcret.h"

void AfficheurConcret::miseAJour(Robot* er) {
	cout << "------------" << endl;
	cout << "Etat : " << er->getEtat()->getInstance()->getName() << endl;
	cout << "Position : (" << er->getPosition().getX() << "," << er->getPosition().getY() << ")" << endl;
	cout << "Direction : " << er->getDirection() << endl;
	cout << "Poids de mon objet : " << er->getObjet().getPoids() << endl;
	cout << "Hauteur du plot : " << er->getPlot().getHauteur() << endl;
	cout << "------------" << endl;
}