//Jay Olson
//CIS 1202-800
//July 14, 2025
//Unit 8 Exceptions Part A

//This program has a function to calculate character offsets, throwing exceptions in error conditions.

#include <iostream>
#include <string>
using namespace std;

char character(char, int);

int main() {

	char userChar = '$';
	int userOffset = -1;
	char target = '@';

	cout << "Enter a character (A-Z or a-z): ";
	cin >> userChar;

	cout << "Enter an offset value: ";
	cin >> userOffset;

	try {

		target = character(userChar, userOffset);
		cout << "New character: " << target;

	}

	catch (string invalidChar) {

		cout << invalidChar;

	}

	catch (...) {
		cout << "General error."; //Catch-all if the others do not catch.
	}


	cout << endl << endl;
	system("pause");
	return 0;

}


char character(char start, int offset) {

	char result = '@';
	bool upperConverted = false;
	string invalidCharacterException = "ERROR: Invalid character. Must be a-z or A-Z.\n";

	if (start >= 'a' && start <= 'z') {
		//use a toUpper function to make the comparison easy. And if there is a conversion flag, convert it back.
		start = toupper(start);
		upperConverted = true;
	}

	if (start < 'A' || start > 'Z') {

		//starting element is outside of range a-z or A-Z
		throw invalidCharacterException;

	}

	else {
		result = start + offset;

	}

	if (upperConverted = true) {
	
		result = tolower(result);

	}

	return result;

}