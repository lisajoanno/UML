/**********

Classe Invocateur



**********/

#ifndef INVOCATEUR_H
#define INVOCATEUR_H

#include "Commande.h"

using namespace std;

class Robot;

class Invocateur {

private:
	Robot* robot;
	
public:
	Invocateur();
	Invocateur(Robot* r);

	void invoquer();
	int getIn();
	string getStr();
	Robot* getRobot();
};

#endif
