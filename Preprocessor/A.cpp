#include "A.h"
#include <iostream>
// one of the things that the preprocessor does is includes
// it essentially copy pastes the code in that .h file and repaces the include


void A::print()
{
	std::cout << "hi\n";
	std::cout << i << std::endl;
}

void func() {}