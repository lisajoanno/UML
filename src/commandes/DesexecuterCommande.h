/**********

Classe DesexecuterCommande

Commande pour désexecuter la dernier commande (robot ou pas).

**********/

#ifndef DESEXECUTERCOMMANDE_H
#define DESEXECUTERCOMMANDE_H

#include "Commande.h"

class DesexecuterCommande : public Commande {

public:
	static DesexecuterCommande desexecuterCommande;

	DesexecuterCommande();
	DesexecuterCommande(string s);
	Commande* constructeurVirtuel();

	void execute();
	void desexecute();
};

#endif
