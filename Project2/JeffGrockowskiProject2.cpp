// Author: Jeff Grockowski
// Date: 06/10/2019
// CSCI 121 project 2
// Program allows user to calculate BMI, and the amount chocolate they can eat.
#include <iostream>
#include <string>
using namespace std;

int main() {
	int const chocolateBarCal(230);
	int weight, height, age;
	double BMR, cBarsPerBMI;
	string gender("A"), repeat("Y");

	while((repeat == "Y") || (repeat == "y"))		// While loop for entire program, 
	{												// allows user to repeat program until user changes the "repeat" variable through input at the end of the program
		cout << "Welcome to my BMR calculator!\n";
		cout << "Gender (M or F):";
		cin >> gender;
		while ((gender != "F") && (gender != "M") && (gender != "m") && (gender != "f"))      // loop to ensure user entry matches one of the two BMI equations
		{
			cout << "invalid gender.\n";
			cout << "Gender (M or F):";
			cin >> gender;
		}
		cout << "Age (In years):";		 // this block obtains the rest of the variables for BMR equation,
		cin >> age;						 //	this information pertains to both genders
		cout << "Weight (in pounds):";
		cin >> weight;
		cout << "Height (In inches):";
		cin >> height;
		cout << endl;

		if ((gender == "M") || (gender == "m"))		// if else structure calculates the BMR and tells user the result based on gender input
		{											// the else block is the female calculation
			BMR = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
			cBarsPerBMI = BMR / chocolateBarCal;
			cout << "He needs " << BMR << " calories to maintain his weight.\n";
		}
		else 
		{
			BMR = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
			cBarsPerBMI = BMR / chocolateBarCal;
			cout << "She needs " << BMR << " calories to maintain her weight.\n";
		}

		cout << "that is about " << cBarsPerBMI << " Chocolate bar's calories!\n";		// this block tells user the chocolate bars worth of BMI
		cout << "would you like to do another calculation? (Y or N): ";					// also confirms if user would like to recalculate.
		cin >> repeat;
		cout << endl;
	}
	cout << "Thanks for using my BMR calculator, Good Bye!\n";
	return 0;
}