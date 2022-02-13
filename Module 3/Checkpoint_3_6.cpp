// Checkpoint 3.6 - Odd or Even?

/* 
	Write a program that reads an integer and determines and prints
	whether it is odd or even. If integer x is odd, print "x is odd"
 */


#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	cout << a << " is " << ((a % 2 == 0) ? "even" : "odd") << "\n";
	return 0;
}