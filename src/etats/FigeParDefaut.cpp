#include "FigeParDefaut.h"

FigeParDefaut* FigeParDefaut::instance = new FigeParDefaut();

FigeParDefaut* FigeParDefaut::getInstance() {
    return instance;
}

string FigeParDefaut::getName() {
	return "Figé par défaut";
}