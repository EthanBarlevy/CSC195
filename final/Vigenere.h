#pragma once
#include "Encryptor.h"
#include <string>
#include <vector>

class Vigenere : public encryptor{
public:
	std::string encrypt(std::string plaintext);
	std::string encrypt(std::string plaintext, std::string key);
	std::string decrypt(std::string ciphertext, std::string key);
};