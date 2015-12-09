#include "SaisirCommande.h"

SaisirCommande SaisirCommande::saisirCommande("SAISIR");

SaisirCommande::SaisirCommande() {
	Commande("SAISIR");
}

SaisirCommande::SaisirCommande(string s) {
	nouvelleCommande(s,this);
}

Commande* SaisirCommande::constructeurVirtuel() {
	return new SaisirCommande();
}

// Demande la hauteur de le poids de l'objet, puis crée un objet et le fait saisir par le robot
void SaisirCommande::execute() {
	o = Objet(Invocateur::i->getIn("Poids de l'objet"));
	saisirCommande.o = o;
	Invocateur::i->getRobot()->saisir(o);
	Commande::effectuerNouvelleCommande(this);
}

// Fait poser l'objet du robot
void SaisirCommande::desexecute() {
	Invocateur::i->getRobot()->poser();
}
