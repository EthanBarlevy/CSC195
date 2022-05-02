#include "Animal.h"
#include <iostream>

namespace edb {
	void Animal::Read(std::ostream & ostream, std::istream & istream)
	{
		Actor::Read(ostream, istream);

		ostream << "Enter name: ";
		istream >> name;

		ostream << "Enter hp: ";
		istream >> hp;

		ostream << "Enter legs: ";
		istream >> legs;
	}

	void Animal::Write(std::ostream & ostream)
	{
		Actor::Write(ostream);

		ostream << "Name: " << name << std::endl;
		ostream << "hp: " << hp << std::endl;
		ostream << "legs: " << legs << std::endl;
	}

	void Animal::Read(std::ifstream& istream)
	{
		istream >> name;
		istream >> hp;
		istream >> legs;
	}

	void Animal::Write(std::ofstream& ostream)
	{
		ostream << name << std::endl;
		ostream << hp << std::endl;
		ostream << legs << std::endl;
	}
}