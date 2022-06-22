#pragma once
#include <string>

class encryptor {
public:
	encryptor() {}

	virtual std::string encrypt(std::string message);
	virtual std::string decrypt(std::string message);
};