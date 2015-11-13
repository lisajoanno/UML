/**********

Classe Plot

Caractérise un plot par sa hauteur sur le terrain plan.

**********/

#ifndef PLOT_H
#define PLOT_H

class Plot {
    
private :
    int hauteur;
        
public :
    Plot();
    Plot(int h) : hauteur(h) { };
        
    int getHauteur(); 
};

#endif