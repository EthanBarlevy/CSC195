#include "Character.h"


namespace edb {
	void Character::TakeDamage(int damage)
	{
		health -= damage;
	}

	void Character::BattleCry()
	{
		std::cout << "UwU! Tis I, " << name << "!\n";
	}

	void Character::Heal(int health)
	{
		this->health += health;
	}
}