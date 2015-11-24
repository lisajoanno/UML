#include "Invocateur.h"
#include "Commande.h"

map<string, Commande*>Commande::mc;

Invocateur::Invocateur() {
}

void Invocateur::invoquer() {
    string in;
    cin >> in;
    //Commande::mc[in]->execute();
    cout << "Vous avez lancé : " << in;
}

int Invocateur::getIn() {
	int in;
	cin >> in;
	return in;
}
