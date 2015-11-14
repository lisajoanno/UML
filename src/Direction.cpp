#include "Direction.h"

void Direction::afficher(Direction::ENDirection d) {
	string t[] = {"Nord", "Sud", "Est", "Ouest"};
	cout << "Position : " << t[d];
}