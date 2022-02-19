// Problem 3

/*

Write a program that accepts from user input a 
year written as a 4-digit number and outputs the 
Roman number equivalent. You may assume that the 
year is within the range [1000, 2999].

*/

#include <iostream>
using namespace std;

void numeralToRoman(int numeral) {
	string symbol[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	int value[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	string output = "";

	int idx = 0;
	
	while (numeral != 0) {
		if (numeral - value[idx] < 0) {
			idx++;
			continue;
		}
		numeral -= value[idx];
		output += symbol[idx];
		idx = 0;
	}
	cout << output << "\n";
}

int main() {
	int i;
	while (cin >> i, i != 0) {
		numeralToRoman(i);
	}
	return 0;
}

