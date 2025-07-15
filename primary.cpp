//Jay Olson
//CIS 1202-800
//July 14, 2025
//Unit 8 Exceptions Part A

//This program has a function to calculate character offsets, throwing exceptions in error conditions.

#include <iostream>
using namespace std;

char character(char, int);

int main() {

	char userChar = '$';
	int userOffset = -1;

	cout << "Enter a character (A-Z or a-z): ";
	cin >> userChar;

	cout << "Enter an offset value: ";
	cin >> userOffset;

	character(userChar, userOffset);


	cout << endl << endl;
	system("pause");
	return 0;

}


char character(char start, int offset) {

	try {



	}

}