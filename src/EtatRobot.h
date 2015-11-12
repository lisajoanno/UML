#ifndef ETATROBOT_H
#define ETATROBOT_H

#include <iostream>


using namespace std;

class EtatRobot {
    
    private :
    
    public :
        EtatRobot();

        virtual EtatRobot avancer();
        virtual EtatRobot evaluerPlot();
        virtual EtatRobot peser();

        virtual EtatRobot* tourner();
        virtual EtatRobot* saisir();
        virtual EtatRobot* poser();
        virtual EtatRobot* rencontrerPlot();
        virtual EtatRobot* figer();
        virtual EtatRobot* repartir();

        EtatRobot afficher();
};

#endif
