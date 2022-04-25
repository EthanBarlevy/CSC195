#pragma once
#include <string>

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

		std::string getName() { return name; }
		virtual eType getType() { return eType::Enemy;  }

	protected:
		std::string name;
		int hp;
	};
}