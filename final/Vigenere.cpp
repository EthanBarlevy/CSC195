#include "Vigenere.h"
#include <iostream>

std::string Vigenere::encrypt(std::string plaintext) {
	std::string ciphertext;
	std::string key = "owo";
	int i = 0;
	for (auto c : plaintext) {
		int keySpot = alphaLookup(key.at(i % key.size()));
		int cSpot = alphaLookup(c);
		char enChar = alphabet[(cSpot + keySpot) % 26];
		ciphertext += enChar;
		i++;
	}
	return ciphertext;
}

std::string Vigenere::encrypt(std::string plaintext, std::string key)
{
	std::string ciphertext;
	int i = 0;
	for (auto c : plaintext) {
		int keySpot = alphaLookup(key.at(i % key.size()));
		int cSpot = alphaLookup(c);
		char enChar = alphabet[(cSpot + keySpot) % 26];
		ciphertext += enChar;
		i++;
	}
	return ciphertext;


}

std::string Vigenere::decrypt(std::string ciphertext, std::string key)
{
	std::string plaintext;
	int i = 0;
	for (auto c : ciphertext) {
		int keySpot = alphaLookup(key.at(i % key.size()));
		int cSpot = alphaLookup(c);
		int spot = ((cSpot - keySpot) % 26);
		if (spot < 0) {
			spot += 26;
		}
		char deChar = alphabet[spot];
		plaintext += deChar;
		i++;
	}

	return plaintext;
}
