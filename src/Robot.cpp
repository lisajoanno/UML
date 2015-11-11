#include "Robot.h"

/* Constructeur vide */
Robot::Robot() {
	direction = "";
	position.setX(0);
	position.setY(0);
	plot = Plot();
	objet = Objet();
	//AVide* avide = AVide().getInstance();
	etat = AVide().getInstance();
}

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

/*
**	Methodes
*/
void Robot::avancer(int x, int y) {
	try {
		etat->avancer();
		position.setX(x);
		position.setY(y);
	} catch(RobotException e) { };
}

void Robot::tourner(string d) {
	try {
		etat->tourner();
		direction = d;
	} catch(RobotException e) { };
}

void Robot::saisir(Objet o) {
	try {
		etat->saisir();
		objet = o;
	} catch (RobotException e) { };
}

void Robot::poser() {
	try {
		etat->poser();
		//objet = NULL;
	} catch(RobotException e) { };
}

void Robot::peser() {
	try {
		etat->peser();
	} catch(RobotException()) {	};
}

void Robot::rencontrerPlot(Plot p) {
	try {
		etat->rencontrerPlot();
		plot = p;
	} catch(RobotException e) { };
}

void Robot::evaluerPlot() {
	try {
		etat->evaluerPlot();
	} catch(RobotException e) { };
}

void Robot::figer() {
	try {
		etat->figer();
	} catch(RobotException e) { };
}

void Robot::repartir() {
	try {
		etat->repartir();
	} catch(RobotException e) { };
}

void Robot::afficher() {
	try {
		etat->afficher();
	} catch(RobotException e) { };
}
