#include <iostream>

using namespace std;

void f1(int i) {
	i += 5;
}

void f2(int* i) {
	*i += 5;
}

void swap(int* i1, int* i2) {
	cout << "pointer" << endl;
	int tmp = *i2;
	*i2 = *i1;
	*i1 = tmp;
}

void swap(int& i1, int& i2) {
	cout << "reference" << endl;
	int tmp = i2;
	i2 = i1;
	i1 = tmp;
}

int main() {
	int i = 10;
	int j = 17;

	int* p = &i; // pointer
	int& r = i; // reference (alias to a variable) [acts the exact same as using the other name for the same variable]

	cout << &i << endl;
	cout << &r << endl;

	f1(i); // pass by value (makes a copy)
	cout << i << endl;

	//f2(p); // pass by value with pointers (allows for a dereference to alter the value) [still tecnically coping the pointer to a new variable]
	cout << i << endl;
	cout << *p << endl;

	//swap(&i, &j); // you tecnically dont need the '&' because it is implicitly defined
	swap(i, j); // pass by reference (essentially an easier way to change values than using pointers)
	cout << i << " " << j << endl;
}