#include "Game.h"
#include <fstream>
#include <iostream>

using namespace std;

Game::Game(std::string fileName)
{
	ifstream input(fileName);

	if (input.is_open()) {
		string str;
		while (getline(input, str)) {
#ifdef _DEBUG
			cout << str << endl;
#endif
			words.push_back(str);
		}

		input.close();
	}
}

void Game::Start()
{
	numGuesses = 0;
	letters.clear();
	word = words[rand() % words.size()];
#ifdef _DEBUG
	cout << "answer: " << word << endl;
#endif
}

bool Game::Guess(char c)
{
	letters.push_back(c);

	// compare guess to letters in the owrd
	for (auto letter : word) {
		if (tolower(letter) == tolower(c)) return true;
	}

	numGuesses++;

	return false;
}

bool Game::Guess(std::string word)
{
	if (this->word == word) return true;
	return false;
}

bool Game::isCharInGuess(char c)
{
	for (auto letter : letters) {
		if (tolower(c) == tolower(letter)) return true;
	}
	return false;
}

std::string Game::getWord(bool show)
{
	string result;
	if (show) {
		for (auto lett : word) {
			result.push_back(lett);
			result.push_back(' ');
		}
		return result;
	}
	
	for (auto lett : word) {
		bool found = false;

		if (!isalpha(lett)) {
			result.push_back(lett);
		}
		else {
			for (auto guess : letters) {
				if (tolower(guess) == tolower(lett)) {
					found = true;
					break;
				}
			}
			result.push_back(found ? lett : '_');
		}
		result.push_back(' ');
	}


	return result;
}
