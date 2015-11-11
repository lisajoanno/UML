#ifndef FIGEPARDEFAUT_H
#define FIGEPARDEFAUT_H

#include "EnRoute.h"
#include "Fige.h"

class FigeParDefaut : public Fige {
    private:
        static FigeParDefaut* instance;
    public:
    	FigeParDefaut() {};
        EtatRobot* getInstance();
        
        EtatRobot repartir();
};

#endif
