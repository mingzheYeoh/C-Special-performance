#include <iostream>
#include <iomanip>
using namespace std;

//function declaration
string calendarFunction(int day);
bool isLeapYear(int year);


int main() {

	int a = 10, b = 10, day, year;

	bool validInput = false;

	if (a == 10) {
		if (b == 10) {
			cout << "a and b are both ten.\n";
		}
		else {
			cout << "b is not ten.\n";
		}
	}
	else {
		if (b == 10) {
			cout << "a is not ten.\n";
		}
		else {
			cout << "a and b are not ten.\n";
		}
	}

	do {
		cout << "Please enter the day: (1 - 7) : ";
		cin >> day;

		if (day > 0 && day < 8) {
			string result = calendarFunction(day);
			cout << "The day is " << result << "\n";
		}
		else {
			cout << "The day number is out of range.\n";
		}
	} while (day < 1 || day > 7);


	do {
		cout << "Please enter the year (example: 2024): ";
		cin >> year;

		if (cin.fail()) {  // check the input is integer or not
			cin.clear(); //Clear the error flag
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard invalid input
			cout << "Please enter an integer.\n";
			validInput = false;
		}
		else {
			if (year > 999 && year < 10000) {
				validInput = true;

				bool result = isLeapYear(year);
				if (result) {
					cout << year << " is leap year.\n";
				}
				else {
					cout << year << " is equal year.\n";
				}
			}
			else {
				validInput = false;
				cout << "!!! Please enter the 4 digits integer.\n";
			}
		}
	} while (validInput == false);




	return 0;
}

string calendarFunction(int day) {

	string date = "";

	switch (day) 
	{
	case 1:
		date = "Monday\n";
		break;
	case 2:
		date = "Tuesday\n";
		break;
	case 3:
		date = "Wednesday\n";
		break;
	case 4:
		date = "Thursday\n";
		break;
	case 5:
		date = "Friday\n";
		break;
	case 6:
		date = "Saturday\n";
		break;
	case 7:
		date = "Sunday\n";
		break;
	}

	return date;

}


bool isLeapYear(int year) {

	bool result = false;

	if (year % 4 == 0 && year % 100 != 0) {
		result = true;
	}
	else if (year % 400 == 0) {
		result = true;
	}

	return result;
}