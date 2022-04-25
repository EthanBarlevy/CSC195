#include "Database.h"
#include <iostream>

namespace edb {
	void Database::create(Actor::eType type)
	{
		Actor* actor = nullptr;
		switch (type) {
		case Actor::eType::Enemy:
			actor = new Enemy();
			break;
		case Actor::eType::Animal:
			actor = new Animal();
			break;
		default:
			std::cout << "Incorrect Number\n";
		}

		actor->Read(std::cout, std::cin);
		actors.push_back(actor);
	}
	void Database::DisplayAll()
	{
		for (auto actor : actors) {
			actor->Write(std::cout);
		}
	}
	void Database::Display(const std::string& name)
	{
		for (auto actor : actors) {
			if (actor->getName() == name) {
				actor->Write(std::cout);
			}
		}
	}
	void Database::Display(Actor::eType type)
	{
		for (auto actor : actors) {
			if (actor->getType() == type) {
				actor->Write(std::cout);
			}
		}
	}
	Database::~Database()
	{
		for (auto actor : actors) {
			delete actor;
		}
		actors.clear();
	}
}
