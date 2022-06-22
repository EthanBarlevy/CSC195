#pragma once
#include "encryptor.h"

class Ceasar : public encryptor {
public:
	Ceasar() {}

	std::string encrypt(std::string message) override;
	std::string decrypt(std::string message) override;
};