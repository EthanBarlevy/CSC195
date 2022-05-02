#include "Enemy.h"
#include <iostream>

namespace edb {
	void Enemy::Read(std::ostream& ostream, std::istream& istream)
	{
		Actor::Read(ostream, istream);

		ostream << "Enter name: ";
		istream >> name;

		ostream << "Enter hp: ";
		istream >> hp;

		ostream << "Enter damage: ";
		istream >> damage;
	}
	void Enemy::Write(std::ostream& ostream)
	{
		Actor::Write(ostream);

		ostream << "Name: " << name << std::endl;
		ostream << "hp: " << hp << std::endl;
		ostream << "damage: " << damage << std::endl;
	}

	void Enemy::Read(std::ifstream& istream)
	{
		istream >> name;
		istream >> hp;
		istream >> damage;
	}

	void Enemy::Write(std::ofstream& ostream)
	{
		ostream << name << std::endl;
		ostream << hp << std::endl;
		ostream << damage << std::endl;
	}
}
