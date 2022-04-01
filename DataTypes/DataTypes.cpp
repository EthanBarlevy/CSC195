

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    char initial;
    unsigned short age;
    bool isAdult;
    unsigned int zipcode;
    float wage;
    unsigned short daysWorked;
    unsigned short hoursWorkedPerDay[7];
    const float TAX = 0.08f;

    cout << "Enter first name: ";
    cin >> name;

    cout << "Enter the first initial of last name: ";
    cin >> initial;

    cout << "Enter age: ";
    cin >> age;
    isAdult = (age >= 18);

    cout << "Enter zipcode: ";
    cin >> zipcode;

    cout << "Enter wage: ";
    cin >> wage;

    cout << "Enter how many days worked last week: ";
    cin >> daysWorked;

    unsigned short totalHours = 0;
    for (short i = 0; i < daysWorked; i++) {
        cout << "Enter hours worked on day " << i + 1 << ": ";
        cin >> hoursWorkedPerDay[i];
        totalHours += hoursWorkedPerDay[i];
    }

    float grossIncome = totalHours * wage;
    float netIncome = grossIncome - (TAX * grossIncome);

    cout << name << " worked for " << totalHours << " hours at $" << wage << " per hour.\n";
    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Net Income: $" << netIncome << endl;

    return 0;
}


