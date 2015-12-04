#include "Invocateur.h"
#include "Commande.h"

//map<string, Commande*>Commande::mc;

Invocateur::Invocateur(Robot* r) {
	robot = r;
}

void Invocateur::invoquer() {
    cout << "Entrez une commande :" << endl;
    string in;
    cin >> in;
    Commande::commandesInscrites()[in]->execute();
    cout << "Vous avez lancé : " << in << endl;
}

int Invocateur::getIn() {
	int in;
	cin >> in;
	return in;
}

string Invocateur::getStr() {
	string choix;
	cin >> choix;
	return choix;
}
