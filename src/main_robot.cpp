#include "Robot.h"
#include "commandes/Invocateur.h"

int main() {
	Invocateur iv;
    iv.invoquer();


    cout << "Simulation de robot ! " << endl;
    Robot robot;

    robot.avancer(2,3);

	Plot plot(22);
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

    robot.avancer(1,2);

    robot.poser();

    robot.tourner(Direction::E);

    Plot plot3(5);
    robot.rencontrerPlot(plot2);

    return 0;
}
