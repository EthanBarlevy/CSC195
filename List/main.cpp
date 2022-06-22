#include "XList.h"
#include <iostream>

using namespace std;

int main()
{

    cout << "list\n";
    edb::List<int> numbers;
    numbers.push_back(12);
    numbers.push_back(78);
    numbers.push_back(12);
    numbers.push_back(34);
    numbers.push_back(9);

    numbers.push_back(10);
    numbers.push_front(8);
    numbers.write(cout);

    cout << "copy\n";
    edb::List<int> copy;
    copy = numbers;
    copy.pop_front();
    copy.pop_back();
    copy.pop_back();
    copy.write(cout);

    cout << "remove\n";
    copy.remove(12);
    copy.write(cout);

    cout << "reverse\n";
    numbers.reverse();
    numbers.write(cout);

    cout << "front: " << numbers.front() << endl;
    cout << "back: " << numbers.back() << endl;
    cout << "size: " << numbers.size() << endl;
    cout << "empty: " << numbers.empty() << endl;
}
