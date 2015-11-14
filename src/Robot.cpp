#include "Robot.h"
#include "observable/AfficheurConcret.h"

/**************
  Constructeur
**************/

/* Constructeur vide, Robot en position (0,0), plot, objet vide, état à vide.*/
Robot::Robot() {
	direction = Direction::N;
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

// Accesseur de la direction
Direction::ENDirection Robot::getDirection() {
	return direction;
}

// Accesseur de la position
Position Robot::getPosition() {
	return position;
}

// Accesseur du plot
Plot Robot::getPlot() {
	return plot;
}

// Accesseur de l'objet
Objet Robot::getObjet() {
	return objet;
}

// Accesseur de l'état
EtatRobot* Robot::getEtat() {
	return etat;
}

// Accesseur de l'ordre
string Robot::getOrdre() {
	return ordre;
}

/**************
  Méthodes
**************/

// Fait avancer le robot à une position x,y.
void Robot::avancer(int x, int y) {
	try {
		ordre = "avancer";
		etat->avancer();
		position.setX(x);
		position.setY(y);
		afficher();
	} catch(RobotException e) { };
}

// Fait tourner dans une direction.
void Robot::tourner(Direction::ENDirection d) {
	try {
		ordre = "tourner";
		etat = etat->tourner();
		direction = d;
		afficher();
	} catch(RobotException e) { };
}

// Fait saisir un objet le robot.
void Robot::saisir(Objet o) {
	try {
		ordre = "saisir";
		etat = etat->saisir();
		objet = o;
		afficher();
	} catch (RobotException e) { };
}

// Fait poser un objet le robot.
void Robot::poser() {
	try {
		ordre = "poser";
		etat = etat->poser();
		afficher();
	} catch(RobotException e) { };
}

// Fait peser son objet le robot.
int Robot::peser() {
	try {
		ordre = "peser";
		etat->peser();
		afficher();
		return objet.getPoids();
	} catch(RobotException()) {	};
	return -1;
}

// Fait rencontrer un plot le robot.
void Robot::rencontrerPlot(Plot p) {
	try {
		ordre = "rencontrer plot";
		etat = etat->rencontrerPlot();
		plot = p;
		afficher();
	} catch(RobotException e) { };
}

// Fait évaluer un plot le robot.
int Robot::evaluerPlot() {
	try {
		ordre = "evaluer plot";
		etat->evaluerPlot();
		return plot.getHauteur();
		afficher();
	} catch(RobotException e) { };
	return -1;
}

// Fait se figer le robot.
void Robot::figer() {
	try {
		ordre = "figer";
		etat = etat->figer();
		afficher();
	} catch(RobotException e) { };
}

// Fait repartir le robot.
void Robot::repartir() {
	try {
		ordre = "repartir";
		etat = etat->repartir();
		afficher();
	} catch(RobotException e) { };
}

// Notifie à l'afficheur que l'état a été changé.
void Robot::afficher() {
	afficheur->miseAJour();
}