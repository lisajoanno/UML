#include "EnRoute.h"

class AVideFacePlot : public EnRoute {
    public:
        static AVideFacePlot instance;
    private:
        AVideFacePlot();
        
        AVideFacePlot getInstance();
        
        EtatRobot evaluerPlot();
        EtatRobot saisir();
        EtatRobot tourner();
};
