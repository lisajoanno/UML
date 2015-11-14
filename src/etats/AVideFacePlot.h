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
