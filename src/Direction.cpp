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

Direction::ENDirection Direction::getDirection(string d) {
    if(d == "N")
        return N;
    if(d == "S")
        return S;
    if(d == "E")
        return E;
    if(d == "O")
        return O;
    return N;
}