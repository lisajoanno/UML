#include "Invocateur.h"
#include "Commande.h"
#include <typeinfo>

//map<string, Commande*>Commande::mc;

Invocateur::Invocateur(Robot* r) {
	robot = r;
}

void Invocateur::invoquer() {
    cout << "Entrez une commande :" << endl;
    string in;
    cin >> in;

    // pour print toutes les string dans la map
    map<string,Commande*> t = Commande::commandesInscrites();
	for(auto elem : t)
	{
	   //cout << elem.first << endl;
	   //cout << typeid(elem).name() << '\n';
	}

    t["AvancerCommande"]->execute();
    // pour print le type de com
    //std::cout << typeid(com).name() << '\n';
    //com->execute();
    //Commande::commandesInscrites()["AvancerCommande"]->execute();
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

Robot* Invocateur::getRobot() {
	return robot;
}
