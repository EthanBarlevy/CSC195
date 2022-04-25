#pragma once
#include "Actor.h"
#include "Enemy.h"
#include "Animal.h"
#include <vector>

namespace edb {
	class Database {
	public:
		void create(Actor::eType type);

		void DisplayAll();
		void Display(const std::string& name);
		void Display(Actor::eType type);

		~Database();

	private:
		std::vector<Actor*> actors;
	};
}