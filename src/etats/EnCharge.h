#ifndef ENCHARGE_H
#define ENCHARGE_H

#include "EnRoute.h"
#include "EnChargeFacePlot.h"

class EnCharge : public EnRoute {
    private:
        static EnCharge* instance;
    public:
    	EnCharge() {};
        EnCharge* getInstance();
        string getName();
        
        EtatRobot avancer();
        EtatRobot* tourner(); 
        EtatRobot peser();
        EtatRobot* rencontrerPlot();
};

#endif
