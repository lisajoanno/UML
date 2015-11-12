#include "EtatRobot.h"
#include "RobotException.h"

EtatRobot::EtatRobot() {
}
        
EtatRobot* EtatRobot::getInstance() {
    // Ma foi ça vire le warning :/
    return this;
}

EtatRobot EtatRobot::avancer() {
    throw RobotException();
}

EtatRobot EtatRobot::evaluerPlot() {
    throw RobotException();
}

EtatRobot EtatRobot::peser() {
    throw RobotException();
}

EtatRobot* EtatRobot::tourner() {
    throw RobotException();
}

EtatRobot* EtatRobot::saisir() {
    throw RobotException();
}

EtatRobot* EtatRobot::poser() {
    throw RobotException();
}

EtatRobot* EtatRobot::rencontrerPlot() {
    throw RobotException();
}

EtatRobot* EtatRobot::figer() {
    throw RobotException();
}

EtatRobot* EtatRobot::repartir() {
    throw RobotException();
}

EtatRobot EtatRobot::afficher() {
    throw RobotException();
}

string EtatRobot::getName() {
	return "";
}