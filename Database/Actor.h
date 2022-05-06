#pragma once
#include <string>
#include <fstream>

namespace edb {
	class Actor {
	public:

		enum class eType {
			Enemy = 1,
			Animal
		};

		Actor(std::string name, int hp) {
			this->name = name;
			this->hp = hp;
		}

		virtual void Read(std::ostream& ostream, std::istream& istream) {}
		virtual void Write(std::ostream& ostream) {}

		virtual void Read(std::ifstream& istream) {}
		virtual void Write(std::ofstream& ostream) {}

		std::string getName() { return name; }
		int getHp() { return hp; }
		virtual eType getType() { return eType::Enemy;  }

	protected:
		std::string name;
		int hp;
	};

	// so apprarently if you put the definition here it breaks everything and it needs to be in a seprate cpp file
	// i have no clue why 
	std::ostream& operator << (std::ostream& ostream, Actor* actor);
}