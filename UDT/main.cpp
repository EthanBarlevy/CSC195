// this basically just places the code from the file here
#include "Employee.h"
#include <vector>
// c++ does not scan the whole file when compiling
// it goes line by line top down
// functions need to be declared before it is used
// functions can be defined later

int main()
{
    vector<Employee*> employees;
    unsigned int numEmployees;
    cout << "Number of employees: ";
    cin >> numEmployees;

    for (unsigned int i = 0; i < numEmployees; i++) {
        cout << "Employee #" << i + 1 << ":" << endl;
        employees.push_back(new Employee());
        employees.at(i)->Read();
        cout << endl;
    }

    for (unsigned int i = 0; i < employees.size(); i++) {
        cout << "Employee #" << i + 1 << ":" << endl;
        employees.at(i)->Write();
        cout << endl;
    }
}

