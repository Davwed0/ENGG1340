// Checkpoint 3.7 - Five-digit integer

/*
	Write a program that inputs a five-digit integer,
	seperates the integer into its digits and prints
	them separated by a comma each. For example, if the
	user types in "42339", the program will print "4,2,3,3,9".
*/

#include <iostream>
using namespace std;

int main() {
	char a[5];
	cin >> a;
	for (int i = 0; i < 4; i++) {
		cout << a[i] << ",";
	}
	cout << a[4] << "\n";
	return 0;
}