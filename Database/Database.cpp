#include "Database.h"
#include <iostream>

namespace edb {
	void Database::Add(Actor::eType type)
	{
		Actor* actor = create(type);

		if (actor != nullptr) {
			actor->Read(std::cout, std::cin);
			actors.push_back(actor);
		}
	}

	Actor* Database::create(Actor::eType type)
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
			break;
		}

		return actor;
	}

	void Database::Load(const std::string& filename)
	{
		std::ifstream stream(filename);

		if (stream.is_open()) {
			while (!stream.eof()) {
				int type;
				stream >> type;
				Actor* actor = create(static_cast<Actor::eType>(type));
				actor->Read(stream);

				if (stream.eof()) break;

				actors.push_back(actor);
			}
		}

		stream.close();
	}

	void Database::Save(const std::string& filename)
	{
		std::ofstream stream(filename);

		if (stream.is_open()) {
			for (auto actor : actors) {
				stream << static_cast<int>(actor->getType()) << std::endl;
				actor->Write(stream);
			}
		}

		stream.close();
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
