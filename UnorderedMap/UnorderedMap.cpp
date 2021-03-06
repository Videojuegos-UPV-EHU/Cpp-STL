// UnorderedMap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <unordered_map>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	unordered_map<string, double> config;

	config["ScreenHeight"] = 480;
	config["ScreenWidth"] = 720;
	config["FrameRate"] = 60;
	config["PacManSpeed"] = 2.3;
	config["PacManPowerUpSpeed"] = 2.6;
	config["GhostSpeed"] = 2.4;

	string parameter;

	//Print the value of a parameter
	cout << "Give me a parameter to lookup: ";
	cin >> parameter;

	auto itParameter = config.find(parameter);
	if (itParameter != config.end())
		cout << "Value: " << config[parameter] << "\n";
	else
		cout << "Parameter not found!!\n";

	//Erase a parameter
	cout << "Give me a parameter to erase: ";
	cin >> parameter;

	itParameter = config.find(parameter);
	if (config.find(parameter) != config.end())
	{
		cout << config.size() << " elements in map before erasing\n";
		config.erase(itParameter);
		cout << "Parameter erased. " << config.size() << " elements in map after erasing\n";
	}
	else
		cout << "Parameter not found!!\n";

	return 0;
}

