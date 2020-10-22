/****************************************************************************************************

  Name:			Robert Aguilar
  
  Date:			10/21/20
  
  Class:		CIS 22A, Fall 2020

  Assignment:	Assignment D 

  Exercise:		Problem D2

  Filename:		prob_d2.cpp

  Professor:	Dr. Oldham

  Purpose:		This Program uses three named constants for the the price in dollars per box
				of either a small, medium or large type of bead.
				Double variables are used for the totals, while int variables are used for the 
				number of boxes.
 
****************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double SMALL_PER_B= 9.20;

const double MEDIUM_PER_B = 8.52;

const double LARGE_PER_B = 7.98;


int main(void)
{

	int smallB, mediumB, largeB;

	cout << "\nEnter the number of boxes of small beads you need: ";
	cin >> smallB;

	cout << "\nEnter the number of boxes of mediumium beads you need: ";
	cin >> mediumB;

	cout << "\nEnter the number of boxes of large beads you need: ";
	cin >> largeB;

	double smallT = smallB * SMALL_PER_B;
	double mediumT = mediumB * MEDIUM_PER_B;
	double largeT = largeB * LARGE_PER_B;

	double TOTAL = smallT + mediumT + largeT;
	
	cout << setprecision(2) << fixed;
	cout << "\nSIZE " << "\t\t" << "BOXES" << "\t\t" << "COST PER BOX" << "\t" << "TOTALS";
	cout << "\nSmall " << setw(15) << smallB << setw(23) << SMALL_PER_B << right << setw(10) << smallT;
	cout << left << setw(21) << "\nMedium " << setw(20) << mediumB << setw(4) << MEDIUM_PER_B << right << setw(10) << mediumT;
	cout << right << setw(15) << "\nLarge " << setw(15) << largeB<< setw(23) << LARGE_PER_B << setw(10) << largeT;
	cout << "\nTOTAL " << setw(16) << "\t\t\t\t" << TOTAL << "\n\n";

	return 0;
}


/****************************************************************************************************

                                        Exectution Results: 
										------------------

Enter the number of boxes of small beads you need: 9

Enter the number of boxes of mediumium beads you need: 8

Enter the number of boxes of large beads you need: 7

SIZE 		BOXES		COST PER BOX	TOTALS
Small           9               9.20     82.80
Medium          8               8.52     68.16        
Large           7               7.98     55.86
TOTAL             		                206.82

****************************************************************************************************/

/*

   Test the program user input of 9 boxes of small beads, 8 boxes of
   medium beads, and 7 boxes of large beads.
   Be sure everything aligns exactly like the format specified.

   */
