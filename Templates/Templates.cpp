#include "Pint.h"
#include <iostream>
#include <vector>

//typedef float currency; // old way
using currency = double; // new way

using namespace std;


//int max(int a, int b) {
//    return (a > b) ? a : b;
//}
//
//float max(float a, float b) {
//    return (a > b) ? a : b;
//}

template <typename T> // it will replaace T with whatever is implicity needed
T max(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T1, typename T2>
T1 max(T1 a, T2 b) {
    return (a > b) ? a : b;
}

template <typename T>
T sqr(T a) {
    return a * a;
}



int main()
{
    currency total = 12.99f;
    cout << total << endl;
    //template class
    /*ipoint point(10, 20);
    fpoint fpoint(34.6f, 98.0f);*/

    ipoint p2;

    int i = int();

    //template functions
    cout << ::max<int>(20, 30) << endl; // specify with angle brackets
    cout << ::max(20, 30.9f) << endl;

    cout << sqr(4.6) << endl;

    vector<float> numbers; // vectors are templated classes so that they can work with every data type


}
