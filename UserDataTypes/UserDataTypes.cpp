#include <iostream>
#include <string>

using namespace std;

struct Point { // default access level is public
    int x; // meant for just holding data
    int y; // it can have meathods but you should not put them here
};

class grossPoint { // default access level is private
public:
    int x; // basically the same as a struct
    int y; // meant to also store meathods
};

class Sandwich {
    string name;
    float price;
    bool isHot;

public:
    Sandwich() { // this is created by default if one is not explicitly created
        cout << "constructor\n";
    }

    Sandwich(string name, float price) : name(name), price(price), isHot(false) {
        cout << "constructor\n";
        //this->name = name;
        //this->price = price;
    }

    ~Sandwich() { //this is gross but its a destructor
        cout << "destructor\n"; // this is to remove the memory stuff
    } // there can only be the one destructor

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

    {
        //scope
        int j = 5;
        {
            j = 10;
        }
    }

    {
        Sandwich sandwich("Ham", 4.5);
        //sandwich.Read();
        sandwich.Write();
    }

    enum class Difficulty {
        Easy = 2,
        Medium, // 3
        Hard // 4
    };

    enum class Eggs {
        Easy, // 1
        Scrambled, // 2
        Hard // 3
    };

    // you need to make enums classes if you have multiple with the same name like Eggs::Easy and Difficulty::Easy

    // there is a union thing that dynamically shifts its memory usage but it is never used so ignore this
    // they use the same memory address which is why they are kinda dumb
    union Data {
        int i;
        float f;
        bool b;
    };

    Data data;
    data.i = 10;
    //data.f = 23.5f;
    data.b = true;

    cout << data.i << endl;

    Difficulty d = Difficulty::Hard;
    if (d == Difficulty::Hard) cout << "Hard\n";
}
