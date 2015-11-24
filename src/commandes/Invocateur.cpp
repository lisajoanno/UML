#include "Invocateur.h"
#include "Commande.h"

Invocateur::Invocateur() {
	
}

void Invocateur::invoquer() {
    string in;
    cin >> in;
    //Commande::mc[in]->execute();
    cout << "Vous avez lancé : " << in;
}
