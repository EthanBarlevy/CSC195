#include <iostream>
#include <array>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int main()
{
    //compile time
    int n1[3]; // container (default array)
    n1[0] = 5;
    cout << n1[0] << endl << n1[1] << endl;

    // static array (class) compile time
    array<int, 5> n2; //similar to default but with more features
    n2[0] = 34;
    n2[1] = 10;
    cout << n2.size() << endl;

    // dynamic array (vector) run time
    vector<int> n3;
    cout << n3.size() << endl;
    n3.push_back(37);
    n3.push_back(7);
    n3.push_back(3);
    n3.at(1) = 6;
    cout << n3.size() << endl;
    cout << n3[0] << endl;
    //n3.front(); // n3[0]

    // stack kinda like a normal array
    stack<float> f1; // inly in order stuff
    f1.push(34.1f);
    f1.push(14.1f);
    f1.push(3.1f);
    cout << f1.top() << endl;
    f1.pop();
    cout << f1.top() << endl;

    // string
    string name = "Ethan"; // kinda like an array
    name[0] = 'B';
    cout << name << endl;
    
    // c string
    // there is a secret extra character at the end that tells where the end is
    char str[] = "Barley";
    //str[6] = 'u'; // this will cause the program to break
    cout << str << endl;

    const char* str2 = "Maple"; // this is another thing idek what it is
}
