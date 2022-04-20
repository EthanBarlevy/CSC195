#pragma once
#include "Character.h"

namespace edb {
	class Player : Character {
	public:
		Player() { // calls from parent before this one
			std::cout << "player ctor\n";
			lives = 0;
			score = 0;
		}

		int getLives() { return lives; }
		int getScore() { return score; }
		void setLives(int lives) { this->lives = lives; }
		void setScore(int score) { this->score = score; }


	private:
		int lives;
		int score;
	};
}