#include "Robot.h"


/* Constructeur vide */
Robot::Robot() {
	direction = NULL;
	position.getX() = 0;
	position.getY() = 0;
	plot = NULL;
	objet = NULL;
}

/*
**	Methodes
*/
void Robot::avancer(int x, int y) {
	try {
		etat = etat.avancer();
		position.getX() = x;
		position.getY() = y;
	} catch(AvancerImpossibleException e) {

	}
}

void Robot::tourner(String d) {
	try {
		etat = etat.tourner();
		direction = d;
	} catch(TournerImpossibleException e) {
		
	}
}

void Robot::saisir(Objet o) {
	try {
		etat = etat.saisir();
		objet = o;
	} catch (SaisirDansMauvaisEtatException e) {
		
	}
}

void Robot::poser() {
	try {
		etat = etat.poser();
		objet = NULL;
	} catch(PoserDansMauvaisEtatException e) {

	}
}

void Robot::peser() {
	try {
		etat = etat.peser();
	} catch(PeserDansMauvaisEtatException()) {

	}
}

void Robot::rencontrerPlot(Plot p) {
	try {
		etat = etat.rencontrerPlot();
		plot = p;
	} catch(RencontrerPlotDansMauvaisEtatException e) {
		
	}
}

void Robot::evaluerPlot() {
	try {
		etat = etat.evaluerPlot();
	} catch(EvaluerPlotDansMauvaisEtatException e) {

	}
}

voir Robot::figer() {
	try {
		etat = etat.figer();
	} catch(FigerDansMauvaisEtatException e) {

	}
}

void Robot::repartir() {
	try {
		etat = etat.repartir();
	} catch(RepartirDansMauvaisEtatException e) {

	}
}

void Robot::afficher() {
	try {
		etat = etat.afficher();
	} catch(AfficherDansMauvaisEtatException e) {

	}
}

void Robot::changerEtat(EtatRobot er) {
	try {
		etat = er;
	} catch(ChangerEtatException e) {

	}
}