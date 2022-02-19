// Problem 2

/*

Write a program that accepts from user input a 
year written as a 4-digit number and outputs the 
Roman number equivalent. You may assume that the 
year is within the range [1000, 2999].

*/

#include <iostream>
using namespace std;

int main() {
	string symbol[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	int value[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

	int input;
	cin >> input;
	string output = "";

	while (input != 0) {
		for (int i = 0; i < 14; i++) {
			if (input - value[i] >= 0) {
				input -= value[i];
				output += symbol[i];
				break;
			}
		}
	}
	cout << output << endl;
}

