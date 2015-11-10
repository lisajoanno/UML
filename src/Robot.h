class Robot {

private :
	String direction;
	Position position;
	Plot plot;
	Objet objet;
	Etat etat;
public :
	Robot() {};
	void avancer(int x, int y);
	void tourner(String d);
	void saisir(Object o);
	void poser();
	void peser();
	void rencontrerPlot(Plot p);
	void evaluerPlot();
	void figer();
	void repartir();
	void afficher();
	void changerEtat(EtatRobot er);

};
