// Agenda.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Friend
{
public:
	string Name;
	long long TelephoneNumber;
	string Email;
};

void PrintAgenda(vector<Friend>& agenda)
{
	cout << "Agenda:------------------------\n";
	if (agenda.size() > 0)
	{
		for (Friend& f : agenda)
			cout << f.Name << "," << f.TelephoneNumber << "," << f.Email << "\n";
	}
	else cout << "<Empty>";
	cout << "-------------------------------\n";
}

int main()
{
	vector<Friend> Agenda;
	string command;
	//commands can be either: 'add', 'remove' (by name), 'find' (by name), 'print' or 'quit'
	// -'add' should ask add a new friend to the agenda (ask for his/her data using the console)
	// -'remove' should ask for a name and, if there is a friend with that name, remove it from the agenda
	// -'find' should ask for a name and should print the data of the first friend with that given name
	// -'print' should print all the friends in the agenda (use PrintAgenda() above)

	cin >> command;
	while (command != "quit")
	{
		//TODO: depending on the command, do whatever needs to be done


		cin >> command;
	}

    return 0;
}

