#include "Controller.h"
#include "View.h"
#include <iostream>

Controller::Controller()
{
	game = new Game("words.txt");
}

Controller::~Controller()
{
	delete game;
}

void Controller::Run()
{
    game->Start();

    while (game->getNumGuesses() < 6 && game->getWord(true) != game->getWord(false)) {
        console::displayHangman(game->getNumGuesses());
        console::displayWord(game->getWord(false));
        console::displayChars(game->getGuesses());

        char guess;
        do {
            guess = console::getChar();
        } while (!isalpha(guess) || game->isCharInGuess(guess));

        if (game->Guess(guess)) std::cout << "correct\n";

        system("cls");
    }

    console::displayHangman(game->getNumGuesses());
    console::displayWord(game->getWord(false));
    console::displayChars(game->getGuesses());
    if (game->getWord(true) == game->getWord(false)) {
        std::cout << "You Win";
    }
    else {
        std::cout << "You Lost" << std::endl;
        std::cout << "Correct Word: ";
        console::displayWord(game->getWord(true));
    }

    Reset();
}

void Controller::Reset()
{
    std::cout << "Play Again? (y/n)" << std::endl;
    char answer;
    std::cin >> answer;
    switch (answer) {
    case 'y':
        system("cls");
        game = new Game("words.txt");
        Run();
        break;
    case 'n':
        break;
    default:
        std::cout << "Incorrect Value" << std::endl;
        Reset();
    }
}
