#include "Animal.h"
#include <iostream>

namespace edb {
	void Animal::Read(std::ostream & ostream, std::istream & istream)
	{
		Actor::Read(ostream, istream);

		ostream << "Enter legs: ";
		istream >> legs;
	}

	void Animal::Write(std::ostream & ostream)
	{
		Actor::Write(ostream);

		ostream << "legs: " << legs << std::endl;
	}
}