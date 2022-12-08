#include "functions.h"

int main() {

	string a = "Racecar";
	string b = "A man, a plan, a canal - Panama";
	string c = "A";
	string d = "this isn't a palindrome";
	cout << "testing: \"" << a << "\"\n";
	printBool(isPalindrome(a));
	cout << "testing: \"" << b << "\"\n";
	printBool(isPalindrome(b));
	cout << "testing: \"" << c << "\"\n";
	printBool(isPalindrome(c));
	cout << "testing: \"" << d << "\"\n";
	printBool(isPalindrome(d));
	return 0;
}


