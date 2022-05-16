#pragma once
#include <string>
#include <vector>

class Game {
public:
	Game(std::string fileName);

	void Start();
	bool Guess(char c);
	bool Guess(std::string word);

	bool isCharInGuess(char c);

	std::string getWord(bool show);
	const std::vector<char>& getGuesses() { return letters; }
	int getNumGuesses() { return numGuesses; }

private:
	std::string word;
	int numGuesses = 0;

	std::vector<std::string> words;
	std::vector<char> letters;
	
};