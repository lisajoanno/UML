#include "Robot.h"

int main() {
    cout << "Simulation de robot ! " << endl;
    Robot robot;

    if (robot.getEtat() == AVide().getInstance())
        cout << "Je suis dans l'état AVide" << endl;
    robot.avancer(2,3);
    cout << "Avancé. Ma position : x : " << robot.getPosition().getX() << ", y : " << robot.getPosition().getY() <<endl;

	Plot plot;
    robot.rencontrerPlot(plot);
    cout << "J'ai rencontré un plot" << endl;
    if (robot.getEtat() == AVideFacePlot().getInstance())
        cout << "Je suis dans l'état AVideFacePlot()" << endl;

    if (robot.getEtat() == AVide().getInstance())
        cout << "Je suis encore dans l'état AVide... Et je suis un fdp au passage" << endl;

    robot.tourner("N");
    cout << "J'ai tourné" << endl;

    return 0;
}
