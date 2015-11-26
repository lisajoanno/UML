#include "Invocateur.h"
#include "Commande.h"

//map<string, Commande*>Commande::mc;

Invocateur::Invocateur() {
}

void Invocateur::invoquer() {
    cout << "Entrez une commande :" << endl;
    string in;
    cin >> in;
    Commande::mc[in]->execute();
    cout << "Vous avez lancé : " << in << endl;
}

int Invocateur::getIn() {
	int in;
	cin >> in;
	return in;
}
