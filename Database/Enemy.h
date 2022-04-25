#pragma once
#include "Actor.h"

namespace edb {
	class Enemy : public Actor {
	public:
		Enemy(std::string name = "Enemy", int hp = 0, int damage = 0) : Actor(name, hp) {}

		void Read(std::ostream& ostream, std::istream& istream) override;
		void Write(std::ostream& ostream) override;

		eType getType() override { return eType::Enemy; }

	private:
		int damage = 0;
	};
}