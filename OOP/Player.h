#pragma once
#include "Character.h"

namespace edb {
	class Player : public Character {
	public:
		Player() { // calls from parent before this one
			std::cout << "default player ctor\n";
			lives = 0;
			score = 0;
		}

		Player(std::string name, int health, int lives, int score = 500) : Character(health, name) {
			std::cout << "player ctor\n";
			this->lives = lives;
			this->score = score;
		}

		int getLives() { return lives; }
		int getScore() { return score; }
		void setLives(int lives) { this->lives = lives; }
		void setScore(int score) { this->score = score; }

		void BattleCry() override;

	private:
		int lives;
		int score;
	};
}