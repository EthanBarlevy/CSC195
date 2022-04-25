#include "Enemy.h"
#include <iostream>

namespace edb {
	void Enemy::Read(std::ostream& ostream, std::istream& istream)
	{
		Actor::Read(ostream, istream);

		ostream << "Enter damage: ";
		istream >> damage;
	}
	void Enemy::Write(std::ostream& ostream)
	{
		Actor::Write(ostream);

		ostream << "damage: " << damage << std::endl;
	}
}
