# UML
Simulateur de robot
# Arnaud Garnier et Lisa Joanno
# SI4 G3

Ce projet contient les sources du projet de simulateur de robot.

Le dossier etats/ contient les sous-classes de EtatRobot.
Le dossier observable/ contient les classes spécifiques à l'affichage.

# Compiler

Ce projet contient un makefile.
Pour générer les .o, utiliser la commande make
Pour les supprimer, utiliser la commande make clean
Pour exécuter le programme, générer les .o et utiliser la commande ./robot

# Exécution du programme

Le main donne au robot plusieurs ordres. Certains ordres n'apparaissent pas, car l'état courant du robot ne permet pas leur exécution.
