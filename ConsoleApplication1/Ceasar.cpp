#include "Ceasar.h"

std::string Ceasar::encrypt(std::string message)
{
    std::string encrypted = "";
    for (auto c : message) {
        encrypted += c++;
    }
    return encrypted;
}

std::string Ceasar::decrypt(std::string message)
{
    return std::string();
}
