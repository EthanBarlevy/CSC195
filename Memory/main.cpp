#include <iostream>

using namespace std;

//ew gross
void ohNo(int size) {
	char* block = new char[100];
	cout << size << endl;
	delete[] block;
	ohNo(size + 100);
}

int main() {
	//ohNo(100);
	bool b = true;

	int i = 37;
	int j = 73;
	int* pi = &i; // you can point to a variable on the stack as well
	*pi = 75; // ew this is gross (it changes the value of i)
	pi = &j; // ew this is gross (you can change all pointers whenever you want)
	*pi = 52; // ew this is gross (it changes the value of j)

	cout << sizeof(pi) << endl;
	cout << pi << endl;
	cout << *pi << endl;
	cout << i << endl;
	cout << j << endl;


	cout << &i << endl;
	cout << &b << endl;

	int* p = new int(10);

	cout << p << endl; // what does it contain (address of the data in the heap)
	cout << &p << endl; // what is the address of this variable (address of the data in the stack)
	cout << *p << endl; // what is the value of the reference that it contains (value of the data in the heap)

	int* pp = new int[5];
	pp[0] = 23;
	pp[1] = 7;

	cout << pp << endl;
	cout << &pp << endl;
	cout << pp[1] << endl;
	
	delete p; // frees up the memory in the heap
	delete[] pp; // nothing is really deleted
	// we are just telling the computer that it will not be used from this point on

	//cout << *p << endl; // this will make the computer really mad because you said that it was free
}