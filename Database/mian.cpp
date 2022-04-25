#include "Database.h"
#include <iostream>

using namespace std;
using namespace edb;


int main() {
	Database database;
	string name;

	bool quit = false;
	while (!quit) {
		cout << endl;
		cout << "1) Create\n";
		cout << "2) Display all\n";
		cout << "3) Display Name\n";
		cout << "4) Display Type\n";
		cout << "5) Quit\n";
		cout << "Enter Selection: ";

		int selection;
		cin >> selection;

		switch (selection) {
		case 1:
			cout << endl;
			cout << "1) Enemy\n";
			cout << "2) Animal\n";

			int type;
			cin >> type;

			cout << endl;
			database.create(static_cast<Actor::eType>(type));
			break;

		case 2:
			cout << endl;
			database.DisplayAll();
			break;
		case 3:
			cout << endl;
			cout << "Enter Name: ";

			
			cin >> name;

			cout << endl;
			database.Display(name);
			break;

		case 4:
			cout << endl;
			cout << "1) Enemy\n";
			cout << "2) Animal\n";

			type;
			cin >> type;

			cout << endl;
			database.Display(static_cast<Actor::eType>(type));
			break;

		case 5:
			quit = true;
			break;
			
		default:
			cout << "Invlaid Number\n";
			break;
		}
	}
}