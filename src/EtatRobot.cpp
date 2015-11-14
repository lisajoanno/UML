#include "EtatRobot.h"
#include "RobotException.h"

/**************
  Constructeur
**************/

EtatRobot::EtatRobot() {
}
        
/**************
  Accesseurs
**************/

EtatRobot* EtatRobot::getInstance() {
    return this;
}

string EtatRobot::getName() {
    return "";
}

/**************
  Méthodes
**************/

// Implémentée dans les sous classes d'EtatRobot, dans les états qui le permettent
EtatRobot EtatRobot::avancer() {
    throw RobotException();
}

// Implémentée dans les sous classes d'EtatRobot, dans les états qui le permettent
EtatRobot EtatRobot::evaluerPlot() {
    throw RobotException();
}

// Implémentée dans les sous classes d'EtatRobot, dans les états qui le permettent
EtatRobot EtatRobot::peser() {
    throw RobotException();
}

// Implémentée dans les sous classes d'EtatRobot, dans les états qui le permettent
EtatRobot* EtatRobot::tourner() {
    throw RobotException();
}

// Implémentée dans les sous classes d'EtatRobot, dans les états qui le permettent
EtatRobot* EtatRobot::saisir() {
    throw RobotException();
}

// Implémentée dans les sous classes d'EtatRobot, dans les états qui le permettent
EtatRobot* EtatRobot::poser() {
    throw RobotException();
}

// Implémentée dans les sous classes d'EtatRobot, dans les états qui le permettent
EtatRobot* EtatRobot::rencontrerPlot() {
    throw RobotException();
}

// Implémentée dans les sous classes d'EtatRobot, dans les états qui le permettent
EtatRobot* EtatRobot::figer() {
    throw RobotException();
}

// Implémentée dans les sous classes d'EtatRobot, dans les états qui le permettent
EtatRobot* EtatRobot::repartir() {
    throw RobotException();
}