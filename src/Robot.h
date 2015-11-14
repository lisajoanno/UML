/**********

Classe Robot

Cette classe est l'objet de la modélisation. 
Un Robot peut effectuer plusieurs actions telles que avancer, tourner, saisir un objet... 
Il contient également des caractéristiques : une direction, une position, un plot (lorsqu'il se trouve face à un plot),
un objet (lorsqu'il en a saisi un), et son état.

**********/

#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include "Objet.h"
#include "Plot.h"
#include "Position.h"
#include "EtatRobot.h"
#include "RobotException.h"
#include "etats/AVide.h"
#include "Direction.h"

class Afficheur;

using namespace std;

class Robot {

private :
	Direction::ENDirection direction;
	Position position;
	Plot plot;
	Objet objet;
	EtatRobot* etat;
	EtatRobot* etatPrecedent;
	Afficheur* afficheur;
	string ordre;
	
public :
	Robot();

	Direction::ENDirection getDirection();
	Position getPosition();
	Plot getPlot();
	Objet getObjet();
	EtatRobot* getEtat();
	string getOrdre();

	void avancer(int x, int y);
	void tourner(Direction::ENDirection d);
	void saisir(Objet o);
	void poser();
	int peser();
	void rencontrerPlot(Plot p);
	int evaluerPlot();
	void figer();
	void repartir();
	void afficher();
};

#endif
