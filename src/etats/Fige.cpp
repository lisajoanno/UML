#include "Fige.h"

Fige* Fige::instance = new Fige();

Fige* Fige::getInstance() {
    return instance;
}

string Fige::getName() {
	return "Figé";
}