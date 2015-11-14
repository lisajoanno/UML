#include "Robot.h"
#include "observable/AfficheurConcret.h"

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
	AfficheurConcret *aff;
    aff = new AfficheurConcret(this);
	afficheur=aff;
	ordre = "";
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

string Robot::getOrdre() {
	return ordre;
}

/**************
  Méthodes
**************/

void Robot::avancer(int x, int y) {
	try {
		ordre = "avancer";
		etat->avancer();
		position.setX(x);
		position.setY(y);
		notifie();
	} catch(RobotException e) { };
}

void Robot::tourner(string d) {
	try {
		ordre = "tourner";
		etat = etat->tourner();
		direction = d;
		notifie();
	} catch(RobotException e) { };
}

void Robot::saisir(Objet o) {
	try {
		ordre = "saisir";
		etat = etat->saisir();
		objet = o;
		notifie();
	} catch (RobotException e) { };
}

void Robot::poser() {
	try {
		ordre = "poser";
		etat = etat->poser();
		notifie();
	} catch(RobotException e) { };
}

int Robot::peser() {
	try {
		ordre = "peser";
		etat->peser();
		notifie();
		return objet.getPoids();
	} catch(RobotException()) {	};
	return -1;
}

void Robot::rencontrerPlot(Plot p) {
	try {
		ordre = "rencontrer plot";
		etat = etat->rencontrerPlot();
		plot = p;
		notifie();
	} catch(RobotException e) { };
}

int Robot::evaluerPlot() {
	try {
		ordre = "evaluer plot";
		etat->evaluerPlot();
		return plot.getHauteur();
		notifie();
	} catch(RobotException e) { };
	return -1;
}

void Robot::figer() {
	try {
		ordre = "figer";
		etat = etat->figer();
		notifie();
	} catch(RobotException e) { };
}

void Robot::repartir() {
	try {
		ordre = "repartir";
		etat = etat->repartir();
		notifie();
	} catch(RobotException e) { };
}

void Robot::afficher() {
	try {
		ordre = "afficher";
		etat->afficher();
		notifie();
	} catch(RobotException e) { };
}

void Robot::notifie() {
	afficheur->miseAJour();
}
