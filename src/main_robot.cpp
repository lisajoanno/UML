#include "Robot.h"
#include <typeinfo>

int main() {
    cout << "Simulation de robot ! " << endl;
    Robot robot;

    robot.avancer(2,3);

	Plot plot;
    robot.rencontrerPlot(plot);

    robot.tourner("N");

    robot.poser();

    Plot plot2(10);
    robot.rencontrerPlot(plot2);

    robot.evaluerPlot();

    Objet objet(20);
    robot.saisir(objet);

    robot.poser();

    robot.saisir(objet);

    robot.evaluerPlot();

    robot.tourner("W");

    robot.figer();

    robot.tourner("S");

    robot.repartir();

    return 0;
}
