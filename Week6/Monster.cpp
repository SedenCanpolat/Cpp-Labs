#include <iostream>
using namespace std;
#include "Monster.h"

int Monster::monsterAttack() {
	int damage = 1;
	damage = attackPower - defense;
	if (damage < 1) {
		damage = 1;
	}
    afterHealth = afterHealth - damage;
	if (afterHealth < 0) {
		afterHealth = 0;
	}
	return damage;
}