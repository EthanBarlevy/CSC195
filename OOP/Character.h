#pragma once
#include <iostream>

namespace edb {
	class Character {
	public:
		Character() {
			std::cout << "default ctor\n";
			health = 0;
			name = "f";
		}

		Character(int health, std::string name) {
			std::cout << "ctor\n";
			this->health = health;
			this->name = name;
		}

		void TakeDamage(int damage);
		virtual void BattleCry();
		void Heal(int); // you can technically do this because it is the only important part but its gross so dont do it

		// generally only put getters and setters definition in the .h
		std::string getName() { return name; }
		int getHealth() { return health; }

	private:
		int health;
		std::string name;

	};
}
