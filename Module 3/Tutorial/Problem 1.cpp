// Problem 1

/*

A right triangle has the sides s1 , s2 and a 
hypotenuse h . The threenumbers must satisfy 
the condition that s1 * s1 + s2 * s2 = h * h. 
When these three numbers are integers, we call 
them a Pythagorean triple. An example is the set 
of three integers 3, 4 and 5.

Write a program to find all Pythagorean triples for
s1, s2, and h all no greater than 300. Use a “brute-'
force” technique, meaning that your program simply 
uses a triple-nested for loop that tries all 
possibilities.

*/

#include <iostream>
#include <math.h>

int main() {
	int count = 0;
	for (int i = 1; i < 301; i++) {
		for (int j = 1; j < 301; j++) {
			for (int k = 1; k < 301; k++) {
				if (i*i + j*j == k*k) {
					count++;
					std::cout << i << ", " << j << ", " << k << std::endl;
				}
			}
		}
	}
	std::cout << count << std::endl;
}