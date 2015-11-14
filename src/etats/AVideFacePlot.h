/**********

Classe AVideFacePlot

Cette classe est un singleton modélise un état possible du robot. Elle hérite de l'état en route.
Dans cet état, le robot peut évaluer un plot, tourner (ce qui l'amène à AVide) et saisir (ce qui l'amène à EnChargeFacePlot).

**********/

#ifndef AVIDEFACEPLOT_H
#define AVIDEFACEPLOT_H

#include "EnRoute.h"
#include "AVide.h"
#include "EnChargeFacePlot.h"

class AVideFacePlot : public EnRoute {

private:
    static AVideFacePlot* instance;
    
public:
	AVideFacePlot() {};
    static AVideFacePlot* getInstance();
    string getName();
        
    EtatRobot evaluerPlot();
    EtatRobot* saisir();
    EtatRobot* tourner();
};

#endif
