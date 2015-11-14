/**********

Classe AVide

Cette classe est un singleton modélise un état possible du robot. Elle hérite de l'état en route.
Dans cet état, le robot peut avancer, tourner et rencontrer un plot (ce qui l'amène à AVideFacePlot).

**********/

#ifndef AVIDE_H
#define AVIDE_H

#include "EnRoute.h"
#include "AVideFacePlot.h"

class AVide : public EnRoute {

private:
    static AVide* instance;

public:       
    AVide() {}; 
    static AVide* getInstance();
    string getName();
        
    EtatRobot avancer();
    EtatRobot* tourner();
    EtatRobot* rencontrerPlot();
};

#endif
