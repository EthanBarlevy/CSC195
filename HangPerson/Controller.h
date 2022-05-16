#pragma once
#include "Game.h"

class  Controller {
public:
	Controller();
	~Controller();

	void Run();
	void Reset();

private:
	Game* game;
};