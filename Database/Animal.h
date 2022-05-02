#pragma once
#include "Actor.h"

namespace edb {
	class Animal : public Actor {
	public:
		Animal(std::string name = "Animal", int hp = 0, int legs = 0) : Actor(name, hp) {}

		void Read(std::ostream& ostream, std::istream& istream) override;
		void Write(std::ostream& ostream) override;

		void Read(std::ifstream& istream) override;
		void Write(std::ofstream& ostream) override;

		eType getType() override { return eType::Animal; }

	private:
		int legs = 0;
	};
}