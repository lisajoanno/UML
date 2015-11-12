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
        EtatRobot* getInstance();
        
        EtatRobot* poser();
        EtatRobot peser(); 
        EtatRobot evaluerPlot();
        EtatRobot* tourner();
};

#endif
