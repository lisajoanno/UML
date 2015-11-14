/**********

Classe EtatRobot

L'état de la machine Robot. Cette classe sera dérivée en autant d'états que la machine peut en prendre.

**********/

#ifndef ETATROBOT_H
#define ETATROBOT_H

#include <iostream>


using namespace std;

class EtatRobot {
    
private :
    
public :
    EtatRobot();
    EtatRobot* getInstance();
    virtual string getName();

    virtual EtatRobot avancer();
    virtual EtatRobot evaluerPlot();
    virtual EtatRobot peser();
    virtual EtatRobot* tourner();
    virtual EtatRobot* saisir();
    virtual EtatRobot* poser();
    virtual EtatRobot* rencontrerPlot();
    virtual EtatRobot* figer();
    virtual EtatRobot* repartir();
};

#endif
