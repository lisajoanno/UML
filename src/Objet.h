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