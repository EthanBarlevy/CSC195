#include <iostream>
#include <string>

using namespace std;

struct Point { // default access level is public
    int x;
    int y;
};

class grossPoint { // default access level is private
public:
    int x;
    int y;
};

class Sandwich {
    string name;
    float price;
    bool hot;

public:
    void Read() { // declare and define
        cout << "enter name: ";
        cin >> name;
    }

    void Write(); // declare
};

void Sandwich::Write() { // define
    cout << "name: " << name << endl;
}

int main()
{
    int mouseX;
    int mouseY;

    Point point; // stored on the stack
    grossPoint* pointe = new grossPoint(); // stored on the heap

    point.x = 300;
    point.y = 200;

    Sandwich sandwich;
    sandwich.Read();
    sandwich.Write();


}
