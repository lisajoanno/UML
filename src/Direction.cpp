#include "Direction.h"

/**************
  Accesseurs
**************/

// Convertit les objets de l'enum en string pour un affichage quelconque.
string Direction::getString(Direction::ENDirection d) {
	switch (d)
    {
        case N: return "Nord";
        case S: return "Sud";
        case E: return "Est";
        case O: return "Ouest";
        default: return "";
    }
    return "";
}