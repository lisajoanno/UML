#include "Commande.h"

#include "AvancerCommande.h"
#include "TournerCommande.h"
#include "SaisirCommande.h"
#include "PoserCommande.h"
#include "PeserCommande.h"
#include "RencontrerPlotCommande.h"
#include "EvaluerPlotCommande.h"
#include "FigerCommande.h"
#include "RepartirCommande.h"

map<string,Commande*> Commande::mc = { {"AVANCER", new AvancerCommande()}, {"TOURNER", new TournerCommande()}, {"SAISIR", new SaisirCommande()}, {"POSER", new PoserCommande()}, {"PESER", new PeserCommande()}, {"RENCONTRERPLOT", new RencontrerPlotCommande()}, {"EVALUERPLOT", new EvaluerPlotCommande()}, {"FIGER", new FigerCommande()}, {"REPARTIR", new RepartirCommande()} };

Commande::Commande() {
	
}

void Commande::execute(Robot* r) {
	throw RobotException();
}

void Commande::desexecute() {
	throw RobotException();
}

