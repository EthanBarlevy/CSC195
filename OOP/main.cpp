#include "Character.h"
#include "Player.h"
#include <iostream>

using namespace std;
using namespace edb; // you can do this but somethimes you need to explicitly write it out if there is the same function in each

int main() {
	cout << "<--- character --->\n";
	Character c1(100, "Mike");
	
	cout << c1.getName() << endl;
	cout << c1.getHealth() << endl;
	c1.BattleCry();

	c1.TakeDamage(50);
	cout << c1.getHealth() << endl;
	c1.Heal(5);
	cout << c1.getHealth() << endl;

	cout << "<--- player --->\n";
	Player player;
}