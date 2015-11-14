#include "Robot.h"
#include <typeinfo>

int main() {
    cout << "Simulation de robot ! " << endl;
    Robot robot;

    robot.avancer(2,3);

	Plot plot;
    robot.rencontrerPlot(plot);

    robot.tourner(Direction::N);

    robot.poser();

    Plot plot2(10);
    robot.rencontrerPlot(plot2);

    robot.evaluerPlot();

    Objet objet(20);
    robot.saisir(objet);

    robot.poser();

    robot.saisir(objet);

    robot.evaluerPlot();

    robot.tourner(Direction::O);

    robot.figer();

    robot.tourner(Direction::S);

    robot.repartir();

    return 0;
}
