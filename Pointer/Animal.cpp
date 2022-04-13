#include "Animal.h"
#include <iostream>

void Animal::Sleep(){
	std::cout << "zzzzzz" << std::endl;
}

void Animal::Speak(){
	std::cout << "oink" << std::endl;
}

void Animal::Print(){
	std::cout << speed << std::endl;
	std::cout << lifespan << std::endl;
}
