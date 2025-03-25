// Week6.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include "Player.h"
#include "Monster.h"
//#include "Player.cpp"
//#include "Monster.cpp"
//#include <string>
using namespace std;

int main()
{
	Player player;
	Monster monster;

    

    cout << "Player is entering the battle arena!" << endl;
    cout << "Name: " << player.name << endl;
    cout << "Health: " << player.health << endl;
    cout << "Attack Power: " << player.attackPower << endl;
    cout << "Defense: " << player.defense << endl;
    cout << endl;
    cout << "Monster is entering the battle arena!" << endl;
    cout << "Name: " << monster.name << endl;
    cout << "Health: " << monster.health << endl;
    cout << "Attack Power: " << monster.attackPower << endl;
    cout << "Defense: " << monster.defense << endl;

   

	while (player.afterHealth!= 0 && monster.afterHealth != 0) {
        cout << "Monster: " << monster.name << " is attacking the player " << player.name << endl;
        cout << endl;
        cout << endl;
        cout << "Monster damage: " << monster.attackPower << endl;
        monster.monsterAttack();
        cout << "After player health: " << player.afterHealth << endl;
        cout << endl;
        cout << "Player: " << player.name << " is attacking the monster " << monster.name << endl;
        cout << "Player damage: " << player.attackPower << endl;
        player.playerAttack();
        cout << "After monster health: " << monster.afterHealth << endl;
	}
}

