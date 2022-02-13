// Checkpoint 3.8 - BMI Calculator

/*
	The formula for calculating BMI is weight/height^2.
	Create a BMI calculator application that reads in the
	user's weight in kilograms and then height in meters,
	then calculates and siplays the user's BMI. Also, the
	application should display the information so the user
	can evaluate his/her BMI
*/


#include <iostream>
using namespace std;

int main() {
	float weight, height;

	cin >> weight >> height;
	cout << "Your BMI = " << weight / (height*height) << endl;

	cout << "BMI VALUES\n" 
		 << "Underweight: less than 18.5\n"
		 << "Normal: between 18.5 and 24.9\n"
		 << "Overweight: between 25 and 29.9\n"
		 << "Obese: 30 or greater\n";

	return 0;
}