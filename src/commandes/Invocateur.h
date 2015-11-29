/**********

Classe Invocateur



**********/

#ifndef INVOCATEUR_H
#define INVOCATEUR_H

#include "Commande.h"

using namespace std;

class Invocateur {

private :

public :
	Invocateur();
	void invoquer(Robot* r);
	int getIn();
};

#endif
