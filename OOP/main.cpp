#include "Character.h"
#include "Player.h"
#include <iostream>
#include <vector>

using namespace std;
using namespace edb; // you can do this but somethimes you need to explicitly write it out if there is the same function in each

int Read(istream& input, ostream& output)
{
	output << "enter number: ";
	int i;
	input >> i;

	return i;
}

int main() {
	Read(cin, cout);

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
	Player player("Alex", 100, 3, 100);
	cout << player.getName() << endl;
	cout << player.getScore() << endl;
	player.BattleCry();

	vector<Character*> characters;
	characters.push_back(new Character(100, "Jane"));
	characters.push_back(new Player("Maximillion", 100, 3, 0));

	for (auto character : characters) {
		cout << character->getName() << endl;
		character->BattleCry();
	}

}