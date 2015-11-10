#include "EnRoute.h"

class EnCharge : public EnRoute {
    private:
        static EnCharge instance;
    public:
        EnCharge();
        
        EnCharge getInstance();
        
        EtatRobot avancer();
        EtatRobot tourner(); 
        EtatRobot peser();
        EtatRobot rencontrerPlot();
};
