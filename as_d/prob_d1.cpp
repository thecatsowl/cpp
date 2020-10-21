/****************************************************************************************************

  Name:			Robert Aguilar
  
  Date:			10/18/20
  
  Class:		CIS 22A, Fall 2020

  Assignment:	Assignment D 

  Exercise:		Problem D1

  Filename:		prob_d1.cpp

  Professor:	Dr. Oldham

  Purpose:		This Program prompts the user for the mass and the velocity of a problem;
  				the program then computes the momentum and the kinetic energy from these inputs.

				The program also prints the Momentum and the Kinetic Engery with identifying
				text.
				
				The execution results have six lines:
				1) Input Mass
				2) Input Velocity
				3) Output Mass
				4) Output Velocity
				5) Momentum
				6) Kinetic Energy

				The printed values are rounded to two decimal positions, and the decimal
				points are aligned.

				
  Notes:		The <iomanip>, <iostream> and <cmath> header files are used.
  	
  				In Classical Physics, Momentum is Mass times the Velocity:

									m * v

				Kinetic Energy is one-half the Mass times the square of the Velocity:

								( m * v^2 / 2)
 
****************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{

	double mass, velocity;

	double momentum;
	double kinE;
	
	cout << "\nEnter your mass: ";
	cin >> mass;

	cout << "\nEnter your velocity: ";
	cin >> velocity;

	cout << setprecision(2) << fixed;
	cout << "\nYour mass is: " << setw(16) << mass << " Kg.\n";
	cout << "\nYour velocity is: " << setw(12) << velocity << " m/s.\n";

	momentum = mass * velocity;
	kinE = (mass * pow(velocity, 2.0))/2;

	cout << "\nYour momementum is: " << setw(10) << momentum << " Kg m/s.\n";
	cout << "\nYour kinetic energy is: " << setw(6) << kinE << " Joules.\n\n";

	return 0;
}




/****************************************************************************************************

                                        Exectution Results: 
										------------------


						    First Test Input
							----------------
Enter your mass: 5

Enter your velocity: 4

Your mass is:             5.00 Kg.

Your velocity is:         4.00 m/s.

Your momementum is:      20.00 Kg m/s.

Your kinetic energy is:  40.00 Joules.


                             Second Test Input 
							 -----------------
Enter your mass: 3.15

Enter your velocity: 10.0

Your mass is:             3.15 Kg.

Your velocity is:        10.00 m/s.

Your momementum is:      31.50 Kg m/s.

Your kinetic energy is: 157.50 Joules.

****************************************************************************************************/

   //First test input 5.0 kilograms and 4.0 meters per second
   //Second test input 3.15 kilograms and 10.0 meters per second
   //Note: With the input in kilograms and meters per second, the units for
   //the momentum is Kg m/s and for Kinetic energy is Joules.


