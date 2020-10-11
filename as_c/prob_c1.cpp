/********************************************************************************

  Name:			Robert Aguilar
  
  Date:			09/28/20
  
  Class:		CIS 22A, Fall 2020

  Assignment:	Assignment C

  Exercise:		Problem C1

  Professor:	Dr. Oldham

  Purpose:		This Program prompts the user for a temperature in Celsius,
  				computes the corresponding temperature in Fahrenheit, and
				then displays the temperature in Celsius and Fahrenheit
				in the console.
				
  Notes:		Fahrenheit = Celsius * 9/5 + 32
  				Use named constants; do not use numbers in the code
				iostream and iomanip header files must be used
				The execution result should have three lines each
				time the program is run:

				1. The input line
				2. Celsius: 	followed by the value from the input, with 
								one decimal position
				3. Fahrenheit:  followed by the value converted from the 
							    input, with one decimal position

				Align the decimal points for the two lines that print 
				the Celsius and Fahrenheit temperatures.
				

********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{

	// These three named constants format the output 
	const int PRECISION = 1;
	const int SETW_CEL = 9;
	const int SETW_FAHR = 6;
	
	// These two named constants are the components of the formula used
	const int TERM = 32;
	const double FAC = (9/5.0);

	double celsius, fahr;
  		
	cout << "\nEnter the temperature in Celsius: "; 
	cin >> celsius;
	
	fahr = celsius * FAC + TERM;

	// The stream manipulators setprecision(n) and setw(n) format output
	cout << setprecision(PRECISION) << fixed;
	cout << "Celsius: " << setw(SETW_CEL) << celsius << endl;
	cout << "Fahrenheit: " << setw(SETW_FAHR) << fahr << endl;
	cout << endl;

	return 0;
}
