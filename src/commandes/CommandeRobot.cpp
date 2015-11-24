#include "CommandeRobot.h"

map<string,CommandeRobot*>& CommandeRobot::commEffectuees() {
	static map<string,CommandeRobot*>* commEffectuees = new map<string,CommandeRobot*>;
	return *commEffectuees;
}

CommandeRobot::CommandeRobot(string d, Invocateur* inv) {
	i = inv;
	commEffectuees()[d] = this;
}


CommandeRobot::CommandeRobot(string d) {
	commEffectuees()[d] = this;
}