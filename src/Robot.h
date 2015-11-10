#include "Objet.h"
#include "Plot.h"
#include "Position.h"
#include "EtatRobot.h"

#include <iostream>

using namespace std;

class Robot {

private :
	string direction;
	Position position;
	Plot plot;
	Objet objet;
	EtatRobot etat;
public :
	Robot();
	void avancer(int x, int y);
	void tourner(string d);
	void saisir(Objet o);
	void poser();
	void peser();
	void rencontrerPlot(Plot p);
	void evaluerPlot();
	void figer();
	void repartir();
	void afficher();
	void changerEtat(EtatRobot er);
	class AvancerImpossibleException{};
	class TournerImpossibleException{};
	class SaisirDansMauvaisEtatException{};
	class PoserDansMauvaisEtatException{};
	class PeserDansMauvaisEtatException{};
	class RencontrerPlotDansMauvaisEtatException{};
	class EvaluerPlotDansMauvaisEtatException{};
	class FigerDansMauvaisEtatException{};
	class RepartirDansMauvaisEtatException{};
	class AfficherDansMauvaisEtatException{};
	class ChangerEtatException{};
	
};
