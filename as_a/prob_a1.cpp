/********************************************************************************

	Name: 		Robert Aguilar

	Class: 		CIS 22A Fall 2020 

	Assignment: Laboratory Assignment A

	Exercise: 	Problem 1A
	
	Purpose:	This Program reads two numbers from the keyboard
				and prints their producet

********************************************************************************/

#include <iostream>
using namespace std;

int main(void)
{

	double a;
	int b;
	double product;

	cout << "\nEnter a decimal number: ";
	cin >> a;
	cout << "Enter an integral number: ";
	cin >> b;
	
	cout << "\n";

	product = a * b;

	cout << a << " * " << b << " = " << product;

	cout << "\n";

	int temp;
	cout << "\nEnter an integer to close the output window: ";
	cin >> temp;
  	
	cout << "\n";

	return 0;
}

/********************************************************************************

                              Execution Results:
							  
Enter a decimal number: 3.14159
Enter an integral number: 2

3.14159 * 2 = 6.28318

Enter an integer to close the output window: 0	

********************************************************************************/
