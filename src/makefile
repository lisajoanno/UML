CC = g++
CFLAGS = -g -Wall -Wextra -std=c++11
EXEC_NAME = robot
INCLUDES =
LIBS =
OBJ_FILES = main_robot.o Robot.o EtatRobot.o Objet.o Position.o Plot.o RobotException.o etats/EnRoute.o etats/Fige.o etats/FigeParDefaut.o etats/EnCharge.o etats/AVideFacePlot.o etats/EnChargeFacePlot.o etats/AVide.o 

all : $(EXEC_NAME)

clean : 
	rm $(EXEC_NAME) $(OBJ_FILES)

$(EXEC_NAME) : $(OBJ_FILES)
	$(CC) -o $(EXEC_NAME) $(OBJ_FILES) $(LIBS)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

%.o: %.cc
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

%.o: %.c
	gcc $(CFLAGS) $(INCLUDES) -o $@ -c $<
