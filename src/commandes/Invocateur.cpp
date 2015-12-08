#include "Invocateur.h"
#include "Commande.h"

//map<string, Commande*>Commande::mc;

Invocateur* Invocateur::i = new Invocateur(new Robot());

void Invocateur::invoquer() {
    i->getRobot()->afficherMessage("Entrez une commande : ");
    string in;
    cin >> in;
    Commande::commandesInscrites()[in]->execute();
}

int Invocateur::getIn(string s) {
	i->getRobot()->afficherMessage(s + " ? ");
	int in;
	cin >> in;
	return in;
}

string Invocateur::getStr(string s) {
	i->getRobot()->afficherMessage(s + " ? ");
	string choix;
	cin >> choix;
	return choix;
}

Robot* Invocateur::getRobot() {
	return robot;
}
