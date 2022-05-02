#pragma once
#include "Actor.h"
#include "Enemy.h"
#include "Animal.h"
#include <vector>

namespace edb {
	class Database {
	public:
		void Add(Actor::eType type);

		void Load(const std::string& filename);
		void Save(const std::string& filename);

		void DisplayAll();
		void Display(const std::string& name);
		void Display(Actor::eType type);

		~Database();

	private:
		Actor* create(Actor::eType type);

	private:
		std::vector<Actor*> actors;
	};
}