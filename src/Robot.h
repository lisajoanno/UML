#ifndef ROBOT_H
#define ROBOT_H

#include "Objet.h"
#include "Plot.h"
#include "Position.h"
#include "EtatRobot.h"
#include "RobotException.h"

#include "etats/AVide.h"

#include <iostream>

using namespace std;

class Robot {

private :
	string direction;
	Position position;
	Plot plot;
	Objet objet;
	EtatRobot etat;
public :
	Robot();

	string getDirection();
	Position getPosition();
	Plot getPlot();
	Objet getObjet();
	EtatRobot getEtat();

	void avancer(int x, int y);
	void tourner(string d);
	void saisir(Objet o);
	void poser();
	void peser();
	void rencontrerPlot(Plot p);
	void evaluerPlot();
	void figer();
	void repartir();
	void afficher();
};

#endif
