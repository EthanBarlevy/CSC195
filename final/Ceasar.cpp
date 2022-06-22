#include "Ceasar.h"

std::string Ceasar::encrypt(std::string plaintext) {
	std::string ciphertext;
	for (auto c : plaintext) {
		int spot = alphaLookup(c) + 1;
		spot = spot % 26;
		char enChar = alphabet[spot];

		ciphertext += enChar;
	}
	return ciphertext;
}

std::string Ceasar::encrypt(std::string plaintext, int key)
{
	std::string ciphertext;
	for (auto c : plaintext) {
		int spot = alphaLookup(c) + key;
		spot = spot % 26;
		char enChar = alphabet[spot];

		ciphertext += enChar;
	}
	return ciphertext;
}

std::string Ceasar::decrypt(std::string ciphertext, int key)
{
	std::string plaintext;
	for (auto c : ciphertext) {
		int spot = alphaLookup(c) - key;
		spot = spot % 26;
		if (spot < 0) {
			spot += 26;
		}
		char deChar = alphabet[spot];

		plaintext += deChar;
	}
	return plaintext;
}


