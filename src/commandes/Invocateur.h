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
	static Invocateur* i;

	Invocateur() {};
	Invocateur(Robot* r) : robot(r) {};

	void invoquer();
	int getIn(string s);
	string getStr(string s);
	Robot* getRobot();


};

#endif
