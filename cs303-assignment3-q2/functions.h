#pragma once
#include <string>
#include <cctype>
#include <iostream>
using namespace std;

/**
* Checks if string is a palindrome through recursion
* @param str	the string to check
*
* @returns		true if it's a palindrome, false otherwise
*/
bool isPalindrome(string str);

/**
* Checks if string is a palindrome through recursion. This function shouldn't be called by the user.
*
* @param str	the string to check
* @param i		the left pointer
* @param j		the right pointer
*
* @returns		true if it's a palindrome, false otherwise
*
*/
bool isPalindrome(string str, int i, int j);

/**
* Prints out to standard output true if it's true, and false if it's false
*
* @param boolean	what to check to print out
*/
void printBool(bool boolean);
