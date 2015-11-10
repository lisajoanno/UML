#include "Robot.h"

int main() {
    cout << "Simulation de robot ! " << endl;
    Robot robot;

    robot.avancer(2,3);
    cout << "Avancé. Ma position : x : " << robot.getPosition().getX() << ", y : " << robot.getPosition().getY() <<endl;

    robot.tourner("N");
    cout << "J'ai tourné" << endl;

    return 0;
}
