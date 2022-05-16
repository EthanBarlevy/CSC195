#include "A.h"
#include <iostream>

#define NAME "Maple"
#define SQR(x) x * x
#define MULT(x, y) x * y
#define PI 3.14159265f
//#define XBOX
//#define WII


int main()
{
    int i = 0;
    i = i + 5;


    A a;
    a.print();

    func();

    // allows for optional code to run depending on predetermined values
#ifdef XBOX
    std::cout << "xbox\n";
#elif defined(WII)
    std::cout << "wii\n";
#endif

#ifdef _DEBUG
    std::cout << "debug\n";
#endif

    std::cout << NAME << std::endl;
    std::cout << SQR(5) << std::endl;
    std::cout << MULT(6, 8) << std::endl;
}
