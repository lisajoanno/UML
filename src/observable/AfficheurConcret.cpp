#include "AfficheurConcret.h"

void AfficheurConcret::MiseAJour(Robot r) {
	cout << "Etat : " << r.getEtat()->getInstance()->getName() << endl;
    cout << "Position : x = " << r.getPosition().getX();
    cout << "y = " << r.getPosition().getY() << endl;
}