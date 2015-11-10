#include "Fige.h"

#ifndef FIGEPARDEFAUT_H
#define FIGEPARDEFAUT_H

class FigeParDefaut : public Fige {
    public:
        static FigeParDefaut instance;
    private:
        FigeParDefaut();
        
        FigeParDefaut getInstance();
        // Pour être sûr que c'est un singleton on empeche une autre construction de la classe, et on empeche l'instanciation avec = ?
        FigeParDefaut(FigeParDefaut const&) = delete;
        void operator=(FigeParDefaut const&) = delete;

        EtatRobot repartir();
};

#endif
