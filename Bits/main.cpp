#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;

using bits_t = unsigned int;
void display_bits(bits_t bits) {
    cout << setw(3) << bits << " : " << bitset<8>(bits) << endl;
}

void display_bits(bitset<8> bits) {
    cout << setw(3) << bits.to_ulong() << " : " << bits << endl;
}

int main()
{
    bitset<8> bits(83);
    cout << bits << endl;

    for (int i = 0; i < 16; i++) {
        display_bits(i);
    }

    bits_t shift = 1;
    display_bits(shift);
    display_bits(shift << 1);
    display_bits(shift << 2);

    bits_t div = 48;
    display_bits(div >> 1);

    // & - AND
    // 1 & 1 = 1
    // 1 & 0 = 0
    // 0 & 1 = 0
    // 0 & 0 = 0
    // | - OR
    // 1 | 1 = 1
    // 1 | 0 = 1
    // 0 | 1 = 1
    // 0 | 0 = 0
    // ^ - XOR
    // 1 ^ 1 = 0
    // 1 ^ 0 = 1
    // 0 ^ 1 = 1
    // 0 ^ 0 = 0

    display_bits(bitset<8>("0111") & bitset<8>("0101"));
    display_bits(bitset<8>("0111") | bitset<8>("0101"));
    display_bits(bitset<8>("0111") ^ bitset<8>("0101"));

    bits_t invincible = (1 << 0); // 0001
    bits_t dead = (1 << 1); // 0010
    bits_t fly = (1 << 2); // 0100

    bits_t attrib = invincible;
    display_bits(attrib);

    if (attrib & fly) { // & = check if bit is on
        cout << "can fly" << endl;
    }

    attrib = attrib | fly; // | = turn bit on

    if (attrib & fly) { // & = check if bit is on
        cout << "can fly later" << endl;
    }

    attrib ^= fly; // ^ = toggle bit on/off

    if (attrib & fly) { // & = check if bit is on
        cout << "can fly still" << endl;
    }

    
    attrib &= ~invincible; // &= ~ = clear bit

    if (attrib & invincible) { // & = check if bit is on
        cout << "damage" << endl;
    }
}