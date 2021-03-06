// String.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string>
#include <iostream>
using namespace std;

int main()
{
	string a, b, c;

	cout << "Give me a string: ";
	//cin >> a    <- this doesn't support spaces in strings
	getline(cin, a);
	cout << "Give me a string: ";
	getline(cin, b);

	c = a + b;
	cout << "a+b = \"" << c << "\"\n";

	//length()
	int lengthA = a.length();
	int lengthB = b.length();

	//substr
	cout << "substr(1,2)= \"" << c.substr(1, 2) << "\"\n";
	cout << "substr(2,2)= \"" << c.substr(2, 2) << "\"\n";
	cout << "substr(3,2)= \"" << c.substr(3, 2) << "\"\n";

	//Comparison
	if (a == b)
		cout << "the two strings are equal\n";
	else cout << "the two strings are different\n";

	//Access the C-style pointer to the char array
	const char* pOldStylePointer= a.c_str();
	
    return 0;
}

