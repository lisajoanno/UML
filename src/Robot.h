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

#include "observable/Afficheur.h"
#include "observable/AfficheurConcret.h"

using namespace std;

class Robot {

private :
	string direction;
	Position position;
	Plot plot;
	Objet objet;
	EtatRobot* etat;
	AfficheurConcret afficheur;

public :
	Robot();

	string getDirection();
	Position getPosition();
	Plot getPlot();
	Objet getObjet();
	EtatRobot* getEtat();

	void avancer(int x, int y);
	void tourner(string d);
	void saisir(Objet o);
	void poser();
	int peser();
	void rencontrerPlot(Plot p);
	int evaluerPlot();
	void figer();
	void repartir();
	void afficher();
	void notifie();
};

#endif
