/********************************************************************************

	Name:		Robert Aguilar

	Class:		CIS 22A Fall 2020
	
	Assignment: Laboratory Assignment B

	Exercise:	Problem 1B

	Purpose:	This Program prompts the user to enter a letter; the program 
				then converts the letter into a whole number and a decimal 
				number via its ASCII code; the program finally prints all 
				three equivalents.

********************************************************************************/

#include <iostream>
using namespace std;

int main(void)
{

	char letter;
	int number;
	double decimalNumber;

	cout << "\nEnter a letter: "; 
	cin >> letter;

	number = letter;

	decimalNumber = number;

	cout << "\nCharacter: \t\t" << letter << endl; 
    cout << "Number: \t\t" << number << endl;	
	cout << "Decimal number: \t" << decimalNumber << "\n" << endl;

	return 0;
}

/********************************************************************************

                              Execution Results: 

Enter a letter: a

Character: 			a
Number: 			97
Decimal number: 	97

Enter a letter: A

Character:	 		A
Number:		 		65
Decimal number: 	65
  
********************************************************************************/
