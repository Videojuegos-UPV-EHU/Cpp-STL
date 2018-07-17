// Algorithms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	//Maximum / minimum
	int a, b;
	cout << "Give me a: ";
	cin >> a;
	cout << "Give me b: ";
	cin >> b;
	int minimum= min(a,b);
	int maximum= max(a,b);
	cout << "minimum= " << minimum << " / maximum= " << maximum << "\n";

	//Clamping a value to the range defined by [a,b]
	int value;

	cout << "Give me a value to clamp: ";
	cin >> value;
	cout << value << " clamped to range [" << minimum << "," << maximum << "] is: "
		<< min(maximum, max(minimum, value)) << "\n";

    return 0;
}

