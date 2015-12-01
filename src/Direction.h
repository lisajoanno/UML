/**********

Classe Direction

Caractérise la direction du robot. C'est une enum qui peut prendre les valeurs N, S, E ou O.

**********/

#ifndef DIRECTION_H
#define DIRECTION_H

#include <iostream>

using namespace std;

namespace Direction {
	typedef enum { N, S, E, O } ENDirection;
	
	string getString(ENDirection);
		
	ENDirection getDirection(string s);

};

#endif
