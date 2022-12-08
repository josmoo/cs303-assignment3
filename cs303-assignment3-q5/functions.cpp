#pragma once
#include "functions.h"
void printMap(map<string, string> mapp) {
	
	for (map<string, string>::iterator it = mapp.begin(); it != mapp.end(); it++) { //for every map entry
		cout << "State: " << it->first << ", Capital: " << it->second << endl; //print out the key and value
	}
	cout << endl;
}

void findCapital(map<string, string> stateDataMap) {
	cout << "Enter a state: ";
	string state;
	cin >> state;
	if (stateDataMap.find(state) == stateDataMap.end()) { //if it isn't found
		cout << "\nState and capital pair not found!\n\n";
		return;
	}
	cout << "The capital is: " << stateDataMap.find(state)->second << endl << endl;
	
}