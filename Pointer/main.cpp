#include "Animal.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<Animal*> animals;

	for (int i = 0; i < 3; i++) {
		Animal* animal = new Animal(12, 25.5);
		animals.push_back(animal);
	}

	//animal = nullptr;
	//cout << sizeof(Animal) << endl;

	for (auto animal : animals) {
		animal->Speak();
	}

	//(*animal).Sleep(); // ew this is really gross thank god no one does this
	//animal->Speak(); // only slightly better but not by much
	//animal->Print();

	for (auto animal : animals) {
		delete animal; // frees up the memory
	}

	animals.clear(); // removes the pointers that did exist
}