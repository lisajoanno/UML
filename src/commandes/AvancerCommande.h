/**********


**********/

#ifndef AVANCERCOMMANDE_H
#define AVANCERCOMMANDE_H

#include <map>
#include "CommandeRobot.h"
#include <typeinfo>

using namespace std;

class AvancerCommande : public CommandeRobot {

private :
	int x, y;
	
public :
	
	AvancerCommande() { 
		//Commande("AvancerCommande");
		//Commande::nouvelleCommande("AvancerCommande");
	}

	AvancerCommande(string s) {
		enregNouvCommande(s, this);
	}

	void execute();
	void desexecute();

	virtual Commande* constructeurVirtuel() {
		cout << "Constructeur virtuel de avancer commande" << endl;
		return new AvancerCommande();
	}

	static AvancerCommande avancerCommande;
};

#endif
