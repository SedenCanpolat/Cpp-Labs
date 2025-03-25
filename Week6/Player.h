#include <iostream>
#include <string>
using namespace std;

#ifndef Player_h
#define Player_h

class Player {
public:
	int health = rand() % 150 + 100;
	int attackPower = rand() % 40 + 10;
	int defense = rand() % 20 + 10;
	string name = "Adam";
	int afterHealth = health;

	int playerAttack();

};


#endif
