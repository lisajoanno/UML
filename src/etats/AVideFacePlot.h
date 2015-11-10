#include "EnRoute.h"

class AVideFacePlot : public EnRoute {
    private:
        static AVideFacePlot instance;
    public:
        AVideFacePlot();
        
        AVideFacePlot getInstance();
        
        EtatRobot evaluerPlot();
        EtatRobot saisir();
        EtatRobot tourner();
};
