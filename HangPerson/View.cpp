#include "View.h"
#include <iostream>

using namespace std;

namespace console {
	void displayWord(const std::string& str)
	{
		cout << str << endl;
	}

	char getChar()
	{
		cout << "enter guess: ";
		char guess;
		cin >> guess;

		return guess;
	}

	void displayChars(const std::vector<char>& letters)
	{
		cout << "Previous guesses: ";
		for (auto letter : letters) {
			cout << (char)toupper(letter) << " ";
		}
		cout << endl;
	}


	void displayLines(const char* lines[], int num) {
		for (int i = 0; i < num; i++) {
			cout << lines[i] << endl;
		}
	}

	void displayHangman(int stage)
	{

		switch (stage) {
		case 0:
		{
			const char* lines[] =
			{
				"------",
				"|   | ",
				"|     ",
				"|     ",
				"|     ",
				"------",
			};
			displayLines(lines, 6);
			break;
		}
		case 1:
		{
			const char* lines[] =
			{
				"------",
				"|   | ",
				"|   O ",
				"|     ",
				"|     ",
				"------",
			};
			displayLines(lines, 6);
			break;
		}
		case 2:
		{
			const char* lines[] =
			{
				"------",
				"|   | ",
				"|   O ",
				"|   | ",
				"|     ",
				"------",
			};
			displayLines(lines, 6);
			break;
		}
		case 3:
		{
			const char* lines[] =
			{
				"------",
				"|   | ",
				"|   O ",
				"|   |/",
				"|     ",
				"------",
			};
			displayLines(lines, 6);
			break;
		}
		case 4:
		{
			const char* lines[] =
			{
				"------",
				"|   | ",
				"|   O ",
				"|  \\|/",
				"|     ",
				"------",
			};
			displayLines(lines, 6);
			break;
		}
		case 5:
		{
			const char* lines[] =
			{
				"------ ",
				"|   |  ",
				"|   O  ",
				"|  \\|/ ",
				"|  /  ",
				"------ ",
			};
			displayLines(lines, 6);
			break;
		}
		case 6:
		{
			const char* lines[] =
			{
				"------ ",
				"|   |  ",
				"|   O  ",
				"|  \\|/ ",
				"|  / \\ ",
				"------ ",
			};
			displayLines(lines, 6);
			break;
		}
		}
	}


}