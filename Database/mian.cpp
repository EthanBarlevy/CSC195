#include "Database.h"
#include <iostream>

using namespace std;
using namespace edb;


int main() {
	Database database;
	string name; // i hate that this is here but it would not let me put it in the switch statement which i am still mad about

	bool quit = false;
	while (!quit) {
		cout << endl;
		cout << "1) Add\n";
		cout << "2) Display all\n";
		cout << "3) Display Name\n";
		cout << "4) Display Type\n";
		cout << "5) Save\n";
		cout << "6) Load\n";
		cout << "7) Quit\n";
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
			database.Add(static_cast<Actor::eType>(type));
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
		{
			string fileName;
			cout << "Enter filename: ";
			cin >> fileName;
			database.Save(fileName);
		}

			break;
			
		case 6:
		{
			string fileName;
			cout << "Enter filename: ";
			cin >> fileName;
			database.Load(fileName);
		}

			break;

		case 7:
			quit = true;
			break;
			
		default:
			cout << "Invlaid Number\n";
			break;
		}
	}
}