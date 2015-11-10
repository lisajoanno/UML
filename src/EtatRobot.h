#ifndef ETATROBOT_H
#define ETATROBOT_H

#include <iostream>

using namespace std;

class EtatRobot {
    
    private :
    
    public :
        EtatRobot();
        EtatRobot avancer();
        EtatRobot tourner();
        EtatRobot saisir();
        EtatRobot poser();
        EtatRobot peser();
        EtatRobot rencontrerPlot();
        EtatRobot evaluerPlot();
        EtatRobot figer();
        EtatRobot repartir();
        EtatRobot afficher();
        EtatRobot changerEtat();
};

#endif
