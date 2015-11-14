/**********

Classe EnCharge

Cette classe est un singleton modélise un état possible du robot. Elle hérite de l'état en route.
Dans cet état, le robot peut avancer, tourner, peser et rencontrer un plot (ce qui l'amène à EnChargeFacePlot).

**********/

#ifndef ENCHARGE_H
#define ENCHARGE_H

#include "EnRoute.h"
#include "EnChargeFacePlot.h"

class EnCharge : public EnRoute {

private:
    static EnCharge* instance;

public:
	EnCharge() {};
    static EnCharge* getInstance();
    string getName();
        
    EtatRobot avancer();
    EtatRobot* tourner(); 
    EtatRobot peser();
    EtatRobot* rencontrerPlot();
};

#endif
