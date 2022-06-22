#include "Encryptor.h"

int encryptor::alphaLookup(char c)
{
    int i = 0;
    for (auto letter : alphabet) {
        if (letter == c) return i;
        i++;
    }
}
