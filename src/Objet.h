/**********

Classe Objet

Caractérise, par son poids, un objet posé sur un plot ou porté par le robot.

**********/

#ifndef OBJET_H
#define OBJET_H

class Objet {
    
private :
    int poids;
        
public :
    Objet();
    Objet(int p) : poids(p) { };
    
   int getPoids(); 
};

#endif