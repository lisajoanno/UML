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
		//cout << "type de this dans AvancerCommande :" << typeid(this).name() << '\n';
		//Commande("AvancerCommande");
		//Commande::nouvelleCommande("AvancerCommande");
		enregNouvCommande("AvancerCommande", this);
	}
	void execute();
	void desexecute();

	AvancerCommande* constructeurVirtuel() {
		cout << "Constructeur virtuel de avancer commande " << endl;
		return new AvancerCommande;
	}

	static AvancerCommande avancerCommande;
};

#endif
