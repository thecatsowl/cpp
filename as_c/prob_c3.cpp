/********************************************************************************

  Name:			Robert Aguilar
  
  Date:			10/13/20
  
  Class:		CIS 22A, Fall 2020

  Assignment:	Assignment C 

  Exercise:		Problem C3 

  Filename:		prob_c3.cpp

  Professor:	Dr. Oldham

  Purpose:		This Program prompts the user to type a first name and  
  				last name in one line; it then reads and saves the first
				character in the first name and truncates the rest; it 
				repeats this process with the last name; finally, it 
				prints the these initials.
				
  Notes:		The first character is read, then the rest is read as a string;
				the second character is read after the space character is 
				ignored; the initials are then printed.  
				The function getline(cin, inputLine) from C2 does not work here;
				The member functions cin.get() and cin.ignore.

********************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{

	char firstI;
	char secondI;
	
	cout << "\nPlease enter a first name and a last name: ";

	// reads first initial and stores it in char variable
	cin.get(firstI);

	// ignores 100 characters or space character, whichever comes first
	cin.ignore(100, ' ');

	// reads second initial aftter space character and stores it in variable
	cin.get(secondI);
	
	cout << "\nThe initials are: " << firstI << secondI << endl << endl;

	return 0;
}

/********************************************************************************

                              Exectution Results: 

Please enter a first name and a last name: Harry Truman

The initials are: HT							  

********************************************************************************/

/************************************************************************************************************************

                                                  Textbook Notes: 

This is from the  second textbook reading for Wed, Oct 7: Chapter 3.8 - Working with Characters and "string" Objects 

Concept: special functions exist for working with characters and "string" objects. 

This Program uses the concept of a "member function."
A "member function" is a built-in function to an object.
In this situation, the "cin" object has "get" as a "member function."
The "member function" is appended to the object by a dot.
"cin.get()" is then used as a function that passes a single character as an argument.
"cin.ignore()" is also used here, which has the option of using no arguments, or two arguments:

                                                  cin.ignore(n, c) 
												  
where "n" is an integer and "c" is a character; if no arguments are used, the very next character is ignored.

pp.118 - 124, "Starting Out with C++: From Control Structures to Objects", 8th Ed.

************************************************************************************************************************/
