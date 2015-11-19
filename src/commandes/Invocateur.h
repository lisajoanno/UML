/**********

Classe Invocateur



**********/

#ifndef INVOCATEUR_H
#define INVOCATEUR_H

#include <map>
#include "Commande.h"

using namespace std;

class Invocateur {

private :
	map<string,Commande> mc;
	
public :
	void invoquer();

};

#endif
