/********************************************************************************

	Name: Robert Aguilar
	Date: 09/21/2020
	Class: CIS 22A, Fall 2020
	Assignment: Lab Assignment B
	Exercise:	Problem B2
	Professor:	Dr. Ira Oldham
	Purpose:	Practice using the string library and the iostream library by
				writing a program that has three string variables; the strings 
				are then to be initialized; the variables are then to be printed, 
				one per line; no user input is needed. The string variables are:	

				String 1: The Wizard of Oz
				String 2: Stagecoach
				String 3: Gosford Park

********************************************************************************/

#include <iostream>	// including header file <iostream>
#include <string>	// including header file <string> 
using namespace std;

int main(void)
{

	string string1, string2, string3;	//	declaring string variables
    
    string1	= "The Wizard of Oz";	// initializing first string variable
	string2 = "Stagecoach";			// initializing second string variable
	string3 = "Gosford Park"; 		// initializing third string variable

	cout << endl;
	cout << string1 << "\n"	<< string2 << "\n" << string3 << endl;
	cout << endl;

return 0;
}








/********************************************************************************

                              Execution Results:

The Wizard of Oz
Stagecoach
Gosford Park
  
********************************************************************************/
