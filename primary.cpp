//Jay Olson
//CIS 1202-800
//July 15, 2025
//Unit 8 Exceptions Part A

//This program has a function to calculate character offsets, throwing exceptions in error conditions.

#include <iostream>
#include <string>
using namespace std;

char character(char, int);

int main() {

	char userChar = '$'; //Initializing to dummy values.
	int userOffset = -900;
	char target = '@';
	char again = 'Y';

	while (again == 'Y') {

		cout << "Enter a character (A-Z or a-z): ";
		cin >> userChar;

		cout << "Enter an offset value: ";
		cin >> userOffset;

		try {

			target = character(userChar, userOffset);
			cout << "New character: " << target;

		}

		catch (string exceptionMsg) {

			cout << exceptionMsg;

		}

		catch (...) {
			cout << "General error."; //Catch-all if the others do not catch.
		}

		cout << "\n\nGo again?"<< endl;
		cout << "Type Y or y to continue/ type any other character to quit: ";
		cin >> again;

		again = toupper(again);

		cout << endl << endl;

	}


	cout << endl << endl;
	system("pause");
	return 0;

}


char character(char start, int offset) {

	char result = '@';
	bool upperConverted = false;
	string invalidCharacterException = "ERROR: Invalid character. Must be a-z or A-Z.\n";
	string invalidRangeException = "ERROR: Invalid range. Target character must be a-z or A-Z.\n";

	if (start >= 'a' && start <= 'z') {
		//use a toupper function to make the comparison easy and to disallow upper/lower-case transitions. And if there is a conversion flag, convert it back later using tolower.
		start = toupper(start);
		upperConverted = true;
	}

	//Exception when starting element is outside of range a-z or A-Z.

	if (start < 'A' || start > 'Z') {

		throw invalidCharacterException;

	}

	else {

		result = start + offset;

	}

	//Exception when result/target element is outside of range a-z or A-Z.

	if (result < 'A' || result > 'Z') {

		throw invalidRangeException;

	}

	if (upperConverted) { //Convert result/target back to lowercase if it started as lowercase
	
		result = tolower(result);
		return result;

	}

	else {

		return result;

	}

}