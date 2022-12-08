#pragma once
#include <map>
#include <string>
#include <iostream>
using namespace std;

/***
* Prints the data stored in map to cout
*
* @param mapp		the map to print out to cout
*/
void printMap(map<string,string> mapp);

/**
* Ask user for the state name, and then outputs the capital name
*
* @param stateDataMap	the map with the states to capitals
*/
void findCapital(map<string, string> stateDataMap);