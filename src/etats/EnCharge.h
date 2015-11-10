#include "EnRoute.h"

class EnCharge : public EnRoute {
    public:
        static EnCharge instance;
    private:
        EnCharge();
        
        EnCharge getInstance();
        
        EtatRobot avancer();
        EtatRobot tourner(); 
        EtatRobot peser();
        EtatRobot rencontrerPlot();
};
