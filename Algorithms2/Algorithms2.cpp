// Algorithms2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	vector<int> a;
	int aux;

	// Store some values in the vector
	cout << "Introduce the values to be stored in vector a. End with a 0:\n";
	cin >> aux;
	while (aux != 0)
	{
		a.push_back(aux);
		cin >> aux;
	}
	// Sort the values
	cout << "Values after sort-ascendding\n";
	sort(a.begin(), a.end());
	for (int& value : a)
		cout << value << " ";
	cout << "\n";

	// Sort the values
	cout << "Values after sort-descending\n";
	sort(a.begin(), a.end(), greater<int>());
	for (int& value : a)
		cout << value << " ";
	cout << "\n";

	// Find
	cout << "What value do you want me to find in the vector?\n";
	int toBeFound;
	cin >> toBeFound;

	auto itValue= find(a.begin(), a.end(), toBeFound);
	if (itValue == a.end())
		cout << "I could not find the value\n";
	else
	{
		cout << "Value found and removed:\n"; //we don't get the position but an iterator referencing the element
		a.erase(itValue);

		for (int& value : a)
			cout << value << " ";
		cout << "\n";
	}

    return 0;
}

