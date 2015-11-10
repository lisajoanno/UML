#include "EnRoute.h"

class AVide : public EnRoute {
    public:
        static AVide instance;
    private:
        AVide();
        
        AVide getInstance();
        
        EtatRobot avancer();
        EtatRobot tourner();
        EtatRobot rencontrerPlot();
};
