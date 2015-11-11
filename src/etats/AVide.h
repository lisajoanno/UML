#ifndef AVIDE_H
#define AVIDE_H

#include "EnRoute.h"
#include "AVideFacePlot.h"

class AVide : public EnRoute {
    private:
        static AVide* instance;
    public:       
    	AVide() {}; 
        EtatRobot* getInstance();
        
        EtatRobot avancer();
        EtatRobot tourner();
        EtatRobot rencontrerPlot();
};

#endif
