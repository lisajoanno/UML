#include "Robot.h"
#include <typeinfo>

int main() {
    cout << "Simulation de robot ! " << endl;
    Robot robot;

    if (robot.getEtat() == AVide().getInstance())
        cout << "Je suis dans l'état AVide" << endl;
    robot.avancer(2,3);
    cout << "Avancé. Ma position : x : " << robot.getPosition().getX() << ", y : " << robot.getPosition().getY() <<endl;


	Plot plot;
    robot.rencontrerPlot(plot);
    cout << "J'ai rencontré un plot." << endl;

    robot.tourner("N");
    cout << "J'ai tourné (donc plus face à un plot). Ma direction : " << robot.getDirection() << endl;

    robot.poser();
    cout << "J'ai posé quelque chose, ce qui ne devrait rien faire (donc pas changer d'état) car interdit !" << endl;

    Plot plot2(10);
    robot.rencontrerPlot(plot2);
    cout << "J'ai rencontré un autre plot de taille 10. La hauteur de mon attribut plot : " << robot.getPlot().getHauteur() << endl;

    int h = robot.evaluerPlot();
    cout << h << " : la taille du plot. J'ai évalué le plot ! Qui était de taille 10." << endl;

    Objet objet(20);
    robot.saisir(objet);
    cout << "J'ai saisi un objet de taille 20, je suis donc en charge. Et la taille de mon objet : " << robot.getObjet().getPoids() << endl;

    robot.poser();
    cout << "J'ai posé l'objet." << endl;

    robot.saisir(objet);
    cout << "J'ai resaisi l'objet précédent." << endl;

    h = robot.evaluerPlot();
    cout << h << " : la taille du plot. J'ai re-évalué le plot ! (pas de changement d'état)" << endl;
    robot.tourner("W");
    cout << "J'ai tourné (donc plus face à un plot). Ma direction : " << robot.getDirection() << endl;

    robot.figer();
    cout << "Aha ! Je suis figé !" << endl;

    robot.tourner("S");
    cout << "J'essaie de tourner ! Mais je suis figé !" << endl;

    robot.repartir();
    cout << "Je repaaaars" << endl;

    return 0;
}
