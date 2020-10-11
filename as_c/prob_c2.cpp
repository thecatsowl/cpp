/********************************************************************************

  Name:			Robert Aguilar
  
  Date:			10/10/20
  
  Class:		CIS 22A, Fall 2020

  Assignment:	Assignment C 

  Exercise:		Problem C2

  Filename:		prob_c2.cpp

  Professor:	Dr. Oldham

  Purpose:		This Program prompts the user for a name; getline is then 
  				used to read all the characters input by the user; these
				characters are then saved in a string variable; finally,
				the line is printed.
				
  Notes:		The header file <string> must be used when using getline.
  				cin passes over and ignores any leading whitespace 
				characters, such as spaces, tabs and line breaks.
				getline reads an entire line, including leading and embedded
				spaces, and stores it in a string object. The getline 
				function is below
				
                              getline(cin, inputLine); 
							  
				where (cin) is the input stream and (inputLine) is the name of
				the string object receiving the input.
							
 
				

********************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(void)
{
	
	string fullName;

	cout << "\nPlease enter a name: ";	
	getline(cin, fullName);

	cout << endl << fullName << "\n\n";

	return 0;
}

/********************************************************************************

                              Execution Results: 

Please enter a name: Franklin Delano Roosevelt

Franklin Delano Roosevelt

********************************************************************************/







