#include "Robot.h"

/* Constructeur vide */
Robot::Robot() {
	direction = "";
	position.setX(0);
	position.setY(0);
/*	plot = NULL;
	objet = NULL;*/  
}

/*
**	Methodes
*/
void Robot::avancer(int x, int y) {
	try {
		etat = etat.avancer();
		position.setX(x);
		position.setY(y);
	} catch(RobotException e) {

	}
}

void Robot::tourner(string d) {
	try {
		etat = etat.tourner();
		direction = d;
	} catch(RobotException e) {
		
	}
}

void Robot::saisir(Objet o) {
	try {
		etat = etat.saisir();
		objet = o;
	} catch (RobotException e) {
		
	}
}

void Robot::poser() {
	try {
		etat = etat.poser();
		//objet = NULL;
	} catch(RobotException e) {

	}
}

void Robot::peser() {
	try {
		etat = etat.peser();
	} catch(RobotException()) {

	}
}

void Robot::rencontrerPlot(Plot p) {
	try {
		etat = etat.rencontrerPlot();
		plot = p;
	} catch(RobotException e) {
		
	}
}

void Robot::evaluerPlot() {
	try {
		etat = etat.evaluerPlot();
	} catch(RobotException e) {

	}
}

void Robot::figer() {
	try {
		etat = etat.figer();
	} catch(RobotException e) {

	}
}

void Robot::repartir() {
	try {
		etat = etat.repartir();
	} catch(RobotException e) {

	}
}

void Robot::afficher() {
	try {
		etat = etat.afficher();
	} catch(RobotException e) {

	}
}
