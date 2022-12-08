#pragma once
#include "functions.h"

int main() {
	map<string, string> stateDataMap; //map of stateNames to capitalNames, and set up below
	stateDataMap.insert(pair<string, string>("Nebraska", "Lincoln"));
	stateDataMap.insert(pair<string, string>("New York", "Albany"));
	stateDataMap.insert(pair<string, string>("Ohio", "Columbus"));
	stateDataMap.insert(pair<string, string>("California", "Sacramento"));
	stateDataMap.insert(pair<string, string>("Massachusetts", "Boston"));
	stateDataMap.insert(pair<string, string>("Texas", "Austin")); //end set up

	cout << "before changing the capital of California:\n\n";
	printMap(stateDataMap);

	stateDataMap.find("California")->second = "Los Angeles";
	cout << "after changing the capital of California:\n\n";
	printMap(stateDataMap);

	char userInput = 'z';
	while (userInput != 'q') {
		findCapital(stateDataMap);
		cout << "Enter q to quit, or anything else to keep going: ";
		cin >> userInput;
	}

	return 0;
}