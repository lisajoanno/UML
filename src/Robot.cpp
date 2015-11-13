#include "Robot.h"

/**************
  Constructeur
**************/

/* Constructeur vide */
Robot::Robot() {
	direction = "";
	position.setX(0);
	position.setY(0);
	plot = Plot();
	objet = Objet();
	etat = AVide().getInstance();
}

/**************
  Accesseurs
**************/

string Robot::getDirection() {
	return direction;
}

Position Robot::getPosition() {
	return position;
}

Plot Robot::getPlot() {
	return plot;
}

Objet Robot::getObjet() {
	return objet;
}

EtatRobot* Robot::getEtat() {
	return etat;
}

/**************
  Méthodes
**************/

void Robot::avancer(int x, int y) {
	try {
		etat->avancer();
		position.setX(x);
		position.setY(y);
	} catch(RobotException e) { };
}

void Robot::tourner(string d) {
	try {
		etat = etat->tourner();
		direction = d;
	} catch(RobotException e) { };
}

void Robot::saisir(Objet o) {
	try {
		etat = etat->saisir();
		objet = o;
	} catch (RobotException e) { };
}

void Robot::poser() {
	try {
		etat = etat->poser();
		//objet = NULL;
	} catch(RobotException e) { };
}

int Robot::peser() {
	try {
		etat->peser();
		return objet.getPoids();
	} catch(RobotException()) {	};
	return -1;
}

void Robot::rencontrerPlot(Plot p) {
	try {
		etat = etat->rencontrerPlot();
		plot = p;
	} catch(RobotException e) { };
}

int Robot::evaluerPlot() {
	try {
		etat->evaluerPlot();
		return plot.getHauteur();
	} catch(RobotException e) { };
	return -1;
}

void Robot::figer() {
	try {
		etat = etat->figer();
	} catch(RobotException e) { };
}

void Robot::repartir() {
	try {
		etat = etat->repartir();
	} catch(RobotException e) { };
}

void Robot::afficher() {
	try {
		etat->afficher();
	} catch(RobotException e) { };
}
