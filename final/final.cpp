#include "Encryptor.h"
#include "Ceasar.h"
#include "Vigenere.h"
#include <iostream>
#include <vector>


int main()
{
    std::vector<encryptor*> encryptors;
    Ceasar* cipher = new Ceasar();
    Vigenere* cipher2 = new Vigenere();

    /*std::cout << "Ceasar: \n";
    std::cout << cipher->encrypt("owo") << std::endl;
    std::cout << cipher->encrypt("owo", 10) << std::endl;
    std::cout << cipher->decrypt("ygy", 10) << std::endl << std::endl;

    std::cout << "Vigenere: \n";
    std::cout << cipher2->encrypt("happy") << std::endl;
    std::cout << cipher2->encrypt("happy", "apple") << std::endl;
    std::cout << cipher2->decrypt("hpeac", "apple") << std::endl;*/

    bool end = false;
    while (!end) {
        std::cout << "Which cipher would you like to use?" << std::endl;
        std::cout << "1) Ceasar" << std::endl;
        std::cout << "2) Vigenere" << std::endl;
        std::cout << "3) End" << std::endl;
        int result;
        std::cin >> result;

        if (result != 1 && result != 2 && result != 3) {
            std::cout << "Incorrect Value\n";
        }
        else if (result != 3) {
            std::cout << "Would you like to encrypt or decrypt\n";
            std::cout << "1) Encrypt\n";
            std::cout << "2) Decrypt\n";
            int result2;
            std::cin >> result2;

            switch (result) {
            case 1:
                if (result2 == 1) {
                    std::string message;
                    int key;
                    std::cout << "Enter the text you want to encrypt:\n";
                    std::cin >> message;
                    std::cout << "Enter the key:\n";
                    std::cin >> key;

                    std::cout << "Ciphertext:\n";
                    std::cout << cipher->encrypt(message, key) << std::endl;
                }
                else {
                    std::string message;
                    int key;
                    std::cout << "Enter the text you want to decrypt:\n";
                    std::cin >> message;
                    std::cout << "Enter the key:\n";
                    std::cin >> key;

                    std::cout << "Plaintext:\n";
                    std::cout << cipher->decrypt(message, key) << std::endl;
                }
                break;
            case 2:
                if (result2 == 1) {
                    std::string message;
                    std::string key;
                    std::cout << "Enter the text you want to encrypt:\n";
                    std::cin >> message;
                    std::cout << "Enter the key:\n";
                    std::cin >> key;

                    std::cout << "Ciphertext:\n";
                    std::cout << cipher2->encrypt(message, key) << std::endl;
                }
                else {
                    std::string message;
                    std::string key;
                    std::cout << "Enter the text you want to decrypt:\n";
                    std::cin >> message;
                    std::cout << "Enter the key:\n";
                    std::cin >> key;

                    std::cout << "Plaintext:\n";
                    std::cout << cipher2->decrypt(message, key) << std::endl;
                }
                break;
            }
        }
        else {
            end = true;
        }
    }

    delete cipher;
    delete cipher2;
}
