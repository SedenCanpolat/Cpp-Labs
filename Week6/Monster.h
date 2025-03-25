#include <iostream>
#include <string>
using namespace std;

#ifndef Monster_h
#define Monster_h

class Monster {
public:
	int health = rand() % 150 + 100;
	int attackPower = rand() % 40 + 10;
	int defense = rand() % 20 + 10;
	string name = "Beast";
	int afterHealth = health;

	int monsterAttack();

};

#endif
