/**********

Classe EnChargeFacePlot

Cette classe est un singleton modélise un état possible du robot. Elle hérite de l'état en route.
Dans cet état, le robot peut peser, évaluer un plot, tourner (ce qui l'amène à EnCharge) et poser (ce qui l'amène à AVideFacePlot).

**********/

#ifndef ENCHARGEFACEPLOT_H
#define ENCHARGEFACEPLOT_H

#include "EnRoute.h"
#include "AVideFacePlot.h"
#include "EnCharge.h"

class EnChargeFacePlot : public EnRoute {

private:
    static EnChargeFacePlot* instance;
    
public:
 	EnChargeFacePlot() {};
    static EnChargeFacePlot* getInstance();
    string getName();
        
    EtatRobot* poser();
    EtatRobot peser(); 
    EtatRobot evaluerPlot();
    EtatRobot* tourner();
};

#endif
