#include "Robot.h"
#include <typeinfo>

int main() {
    cout << "Simulation de robot ! " << endl;
    Robot robot;

    if (robot.getEtat() == AVide().getInstance())
        cout << "Je suis dans l'état AVide" << endl;
    robot.avancer(2,3);
    cout << "Avancé. Ma position : x : " << robot.getPosition().getX() << ", y : " << robot.getPosition().getY() <<endl;

    cout << "Etat : " << robot.getEtat()->getInstance()->getName() << endl;

	Plot plot;
    robot.rencontrerPlot(plot);
    cout << "J'ai rencontré un plot." << endl;
    cout << "Etat : " << robot.getEtat()->getInstance()->getName() << endl;

    robot.tourner("N");
    cout << "J'ai tourné (donc plus face à un plot). Ma direction : " << robot.getDirection() << endl;
    cout << "Etat : " << robot.getEtat()->getInstance()->getName() << endl;

    robot.poser();
    cout << "J'ai posé quelque chose, ce qui ne devrait rien faire (donc pas changer d'état) car interdit !" << endl;
    cout << "Etat : " << robot.getEtat()->getInstance()->getName() << endl;

    Plot plot2(10);
    robot.rencontrerPlot(plot2);
    cout << "J'ai rencontré un autre plot de taille 10. La hauteur de mon attribut plot : " << robot.getPlot().getHauteur() << endl;
    cout << "Etat : " << robot.getEtat()->getInstance()->getName() << endl;

    int h = robot.evaluerPlot();
    cout << h << " : la taille du plot. J'ai évalué le plot ! Qui était de taille 10." << endl;
    cout << "Etat : " << robot.getEtat()->getInstance()->getName() << endl;

    Objet objet(20);
    robot.saisir(objet);
    cout << "J'ai saisi un objet de taille 20, je suis donc en charge. Et la taille de mon objet : " << robot.getObjet().getPoids() << endl;
    cout << "Etat : " << robot.getEtat()->getInstance()->getName() << endl;

    robot.poser();
    cout << "J'ai posé l'objet." << endl;
    cout << "Etat : " << robot.getEtat()->getInstance()->getName() << endl;
    
    robot.saisir(objet);
    cout << "J'ai resaisi l'objet précédent." << endl;
    cout << "Etat : " << robot.getEtat()->getInstance()->getName() << endl;

    h = robot.evaluerPlot();
    cout << h << " : la taille du plot. J'ai re-évalué le plot ! (pas de changement d'état)" << endl;
    cout << "Etat : " << robot.getEtat()->getInstance()->getName() << endl;

    robot.tourner("W");
    cout << "J'ai tourné (donc plus face à un plot). Ma direction : " << robot.getDirection() << endl;
    cout << "Etat : " << robot.getEtat()->getInstance()->getName() << endl;

    robot.figer();
    cout << "Aha ! Je suis figé !" << endl;
    cout << "Etat : " << robot.getEtat()->getInstance()->getName() << endl;

    robot.tourner("S");
    cout << "J'essaie de tourner ! Mais je suis figé !" << endl;
    cout << "Etat : " << robot.getEtat()->getInstance()->getName() << endl;

    robot.repartir();
    cout << "Je repaaaars" << endl;
    cout << "Etat : " << robot.getEtat()->getInstance()->getName() << endl;

    return 0;
}
