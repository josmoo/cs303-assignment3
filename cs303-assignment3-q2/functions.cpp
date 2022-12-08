#pragma once
#include "functions.h"



bool isPalindrome(string str) {
	return isPalindrome(str, 0, str.size() - 1);
}


bool isPalindrome(string str, int i, int j) {
	if (j <= i) { //base case, right pointer has passed left pointer
		return true; //we've checked every letter so it is a palindrome
	}
	if (!isalpha(str.at(i))) { //if the character i is pointing to isn't a alphabetic letter, then we'll ignore it
		i++;
		return isPalindrome(str, i, j);
	}
	if (!isalpha(str.at(j))) { //if the character j is pointing to isn't a alphabetic letter, then we'll ignore it
		j--;
		return isPalindrome(str, i, j);
	}
	if (toupper(str.at(i)) == toupper(str.at(j))) { //if the letter at index i matches the letter at index j
		i++;
		j--; //push the pointers towards the center
		return isPalindrome(str, i, j); //check again
	}
	return false; //the letters don't match, so it's not a palindrome
}


void printBool(bool boolean) {
	if (boolean) {
		cout << "True\n\n";
	}
	else {
		cout << "False\n\n";
	}
}