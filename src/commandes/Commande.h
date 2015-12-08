/**********

Classe Commande



**********/

#ifndef COMMANDE_H
#define COMMANDE_H

#include <map>
#include <vector>
#include "../Robot.h"
#include "../RobotException.h"
#include "Invocateur.h"

class Commande {
	
public:
	// map de toutes les commandes (initialisée à la compilation, avec toutes les commandes possibles)
	static map<string,Commande*>& commandesInscrites();
	// Pour enregister une nouvelle commande possible
	virtual void nouvelleCommande(string s, Commande* com);

	Commande();
	Commande(string s);
	virtual Commande* constructeurVirtuel() {};

	// Liste de toutes les commandes effectuées
	static vector<Commande*>* commandesEffectuees;
	// Pour ajouter une nouvelle commande effectuée
	vector<Commande*>& effectuerNouvelleCommande(Commande* com);

	virtual void execute();
	virtual void desexecute();
};

#endif
