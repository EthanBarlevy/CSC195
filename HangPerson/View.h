#pragma once
#include <string>
#include <vector>

namespace console {
	void displayWord(const std::string& str);
	char getChar();
	void displayChars(const std::vector<char>& letters);

	void displayHangman(int stage);
}