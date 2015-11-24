#include "Invocateur.h"
#include "AvancerCommande.h"

Invocateur::Invocateur() {
	//AvancerCommande *av = new AvancerCommande();
	//map<string,Commande*> mc = { {"AVANCER", av} };
}

void Invocateur::invoquer() {
    string in;
    cin >> in;
    //mc[in]->execute();
    cout << "Vous avez lancé : " << in;
}
