#pragma once

class Animal {
public:
	Animal(int lifespan, int speed) {
		this->lifespan = lifespan; // "this" is a pointer to itself
		this->speed = speed;
	}

	void Sleep();
	void Speak();

	void Print();

private:
	int lifespan;
	float speed;
};