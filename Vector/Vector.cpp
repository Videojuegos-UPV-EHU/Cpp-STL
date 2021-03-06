// Vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myVector;// = vector<int>(3);
	cout << "Vector capacity: " << myVector.capacity() << " / size: " << myVector.size() << "\n";
	myVector.push_back(2);
	cout << "Vector capacity: " << myVector.capacity() << " / size: " << myVector.size() << "\n";
	myVector.push_back(4);
	cout << "Vector capacity: " << myVector.capacity() << " / size: " << myVector.size() << "\n";
	myVector.push_back(6);
	cout << "Vector capacity: " << myVector.capacity() << " / size: " << myVector.size() << "\n";
	myVector.push_back(9);
	cout << "Vector capacity: " << myVector.capacity() << " / size: " << myVector.size() << "\n";
	myVector.pop_back();
	cout << "Vector capacity: " << myVector.capacity() << " / size: " << myVector.size() << "\n";
	myVector.push_back(9);
	cout << "Vector capacity: " << myVector.capacity() << " / size: " << myVector.size() << "\n";


	//for (int i = 0; i < myVector.size(); i++)
	//	cout << myVector[i] << "\n";
	//for (int& element : myVector)
	//	cout << element << "\n";
	for (auto it = myVector.begin(); it != myVector.end(); it++)
		cout << *it << "\n";

    return 0;
}

