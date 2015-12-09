/**********

Classe Commande

Interface de Commande. 
Contient :
- une map contenant les commandes inscrites, instanciées à la compilation de toutes les commandes
- un vecteur contenant toutes les commandes effectuées

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

	// Liste de toutes les commandes effectuées
	static vector<Commande*>* commandesEffectuees;

	Commande();
	Commande(string s);

	virtual Commande* constructeurVirtuel();

	// Pour enregister une nouvelle commande possible
	virtual void nouvelleCommande(string s, Commande* com);

	// Pour ajouter une nouvelle commande effectuée
	vector<Commande*>& effectuerNouvelleCommande(Commande* com);

	virtual void execute();
	virtual void desexecute();
};

#endif
