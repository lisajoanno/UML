#include "EnRoute.h"

class AVide : public EnRoute {
    private:
        static AVide instance;
    public:
        AVide();
        
        AVide getInstance();
        
        EtatRobot avancer();
        EtatRobot tourner();
        EtatRobot rencontrerPlot();
};
