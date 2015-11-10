#include "EnRoute.h"

class EnChargeFacePlot : public EnRoute {
    private:
        static EnChargeFacePlot instance;
    public:
        EnChargeFacePlot();
        
        EnChargeFacePlot getInstance();
        
        EtatRobot poser();
        EtatRobot peser(); 
        EtatRobot evaluerPlot();
        EtatRobot tourner();
};
