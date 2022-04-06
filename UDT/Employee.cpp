#include "Employee.h"

const float Employee::TAX = 0.1f;

void Employee::Read() {
	cout << "enter name: ";
	cin >> name;

	cout << "enter age: ";
	cin >> age;

	cout << "enter zipcode: ";
	cin >> zipcode;

	cout << "enter wage: ";
	cin >> wage;

	cout << "enter the number of hours worked: ";
	cin >> hoursWorked;
}

void Employee::Write() {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Zipcode: " << zipcode << endl;
	cout << "Wage: " << wage << endl;
	cout << "Hours Worked: " << hoursWorked << endl;
	
	float weeklyGrossPay = hoursWorked * wage;
	float weeklyNetPay = weeklyGrossPay - (weeklyGrossPay * TAX);
	
	cout << "Weekly Geoss Pay: " << weeklyGrossPay << endl;
	cout << "Weekly Net Pay: " << weeklyNetPay << endl;
	cout << "Yearly Gross Pay: " << weeklyGrossPay * 52 << endl;
	cout << "Yearly Net Pay: " << weeklyNetPay * 52 << endl;
}