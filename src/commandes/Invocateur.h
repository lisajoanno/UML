/**********

Classe Invocateur



**********/

#ifndef INVOCATEUR_H
#define INVOCATEUR_H

#include "Commande.h"
#include "AvancerCommande.h"

using namespace std;

class Invocateur {

private :

public :
	Invocateur();
	void invoquer();
	int getIn();
};

#endif
