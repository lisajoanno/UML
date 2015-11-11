#include "Robot.h"

int main() {
    cout << "Simulation de robot ! " << endl;
    Robot robot;

    cout << robot.getEtat() << endl;
    robot.avancer(2,3);
    cout << "Avancé. Ma position : x : " << robot.getPosition().getX() << ", y : " << robot.getPosition().getY() <<endl;

	cout << robot.getEtat() << endl;
	Plot plot;
    robot.rencontrerPlot(plot);
    cout << "J'ai rencontré un plot" << endl;

	cout << robot.getEtat() << endl;
    robot.tourner("N");
    cout << "J'ai tourné" << endl;
    return 0;
}
