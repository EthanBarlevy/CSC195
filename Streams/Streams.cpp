#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void streamOut(ostream& stream, string text) {
	stream << text << endl;
}

void streamOut(ofstream& stream, string text) {
	stream << text << endl;
}



int main()
{
	ofstream ofile2 ("test3.txt");
	streamOut(cout, "uwu");
	streamOut(ofile2, "owo");
	ofile2.close();

	cout << "Hoi!\n";

	int i = 4;
	//cin >> i;
	cout << i << endl;

	// file sreams
	ofstream ofile("test2.txt");
	if (ofile.is_open()) {
		ofile << "Hai bruh\n";
	}
	ofile.close();

	ifstream ifile;
	ifile.open("test2.txt"); // can be relpaced with a constructor 

	if (ifile.is_open()) {
		string line;
		getline(ifile, line); // allows for line by line
		cout << line << endl;
	}
	ifile.close();


	return 0; // this is really dumb but it will end the program

	if (ifile.is_open()) {
		cout << "opened\n";

		string text1;
		ifile >> text1;
		cout << text1 << endl;

		string text2;
		ifile >> text2;
		cout << text2 << endl;

		int n;
		ifile >> n;
		cout << n << endl;
	}
}
