#pragma once
#include <iostream>

using namespace std;

class Employee {
public:
	void Read();
	void Write();

private:
	string name;
	unsigned int age;
	string zipcode; // idk why this is a string i was just told to make it as such
	float wage;
	unsigned int hoursWorked;
	static const float TAX;
};