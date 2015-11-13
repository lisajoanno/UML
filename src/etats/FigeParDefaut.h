#ifndef FIGEPARDEFAUT_H
#define FIGEPARDEFAUT_H

#include "Fige.h"

class FigeParDefaut : public Fige {
    private:
        static FigeParDefaut* instance;
    public:
    	FigeParDefaut() {};
        FigeParDefaut* getInstance();
        string getName();

};

#endif
