#pragma once
#include "Encryptor.h"
#include <string>
#include <vector>

class Ceasar : public encryptor{
public:
	std::string encrypt(std::string plaintext);
	std::string encrypt(std::string plaintext, int key);
	std::string decrypt(std::string ciphertext, int key);
};