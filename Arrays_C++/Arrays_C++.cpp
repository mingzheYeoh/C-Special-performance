#include <iostream>
#include <climits>

using namespace std;

//function declaration
void arrayModified(int x[], int size);

int main() {

	//1. The range of integer data type can store

	cout << INT_MIN << " " << INT_MAX << "\n";

	//2. sizeof --- Know the size of a variable or a type

	cout << "int " << sizeof(int) << "\n";
	cout << "char " << sizeof(char) << "\n";
	cout << "bool " << sizeof(bool) << "\n";

	short s = 0;
	cout << "short int " << sizeof(s) << "\n";
	
	long l = 0;
	cout << "long int " << sizeof(l) << "\n";

	//Unsigned is only used to represent the non-negative integer
	cout << "unsigned short int " << sizeof(unsigned short) << "\n";
	cout << "unsigned int " << sizeof(unsigned) << "\n";
	cout << "unsigned long int " << sizeof(unsigned long) << "\n";


	//3. ASCII table 
	cout << "   0 1 2 3 4 5 6 7 8 9\n";
	cout << " 3      ";

	for (int c = 33; c <= 126; c++) {
		if (c % 10 == 0) {
			if (c / 10 <= 9) {
				cout << " ";
			}
			cout << c / 10;
		}
		char cAsChar = c;
		cout << " " << cAsChar;
		if (c % 10 == 9) {
			cout << "\n";
		}
	}

	//Single Array
	int x[5] = {10, 23, 393, 221, 22};
	int length = sizeof(x) / sizeof(x[0]);  //count the length of an integer array

	cout << "\n\n\nOriginal array: { ";

	for (int i = 0; i < length; i++) {
		cout << x[i] << " ";
	}

	cout << "}\n";


	arrayModified(x, 5);

	cout << "Modified array: { ";

	for (int i = 0; i < 5; i++) {
		cout << x[i] << " ";
	}

	cout << "}\n";

	return 0;
}


void arrayModified(int x[], int size) {

	int index;

	cout << "\n\n\nPlease enter the index of the array that you want to modify: ";
	cin >> index;

	do {
		if (index >= 0 && index < size) {
			cout << "Please enter the new number: ";
			cin >> x[index];
		}
		else {
			cout << "The index is out of range.\n";
		}
	} while (index < 0 && index > size);
}



