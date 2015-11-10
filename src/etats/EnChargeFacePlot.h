#include "EnRoute.h"

class EnChargeFacePlot : public EnRoute {
    public:
        static EnChargeFacePlot instance;
    private:
        EnChargeFacePlot();
        
        EnChargeFacePlot getInstance();
        
        EtatRobot poser();
        EtatRobot peser(); 
        EtatRobot evaluerPlot();
        EtatRobot tourner();
};
