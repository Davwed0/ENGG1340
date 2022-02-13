// Checkpoint 3.9 - Reading Input Until -1

/*
	Write a program that reads user input repeatedly until
	-1 is entered, and displays the average of the inputted
	value, disregarding the -1. Assume that the users will 
	always input double values and the user will always inpu
	at least one value.
*/

#include <iostream>
using namespace std;

int main() {
	double i, sum;
	int count = 0;
	while (cin >> i, i != -1){
		sum += i;
		count++;
	}
	cout << sum/count << endl;
}