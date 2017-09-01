/*
	Assignment2-14.cpp: 
	
	driver program that will take input from the user in inches, and convert inches into feet and inches. 
	Result is then displayed to the screen.

	@author Jose A Huerta <josehuerta115@gmail.com>
	@version 1.0

	Algorithm: 

	START OF PROGRAM

		DECL totalInches, feet, inches

		SET totalInches = User Input

		CALC inches = totalInches % 12
		CALC feet = (totalInches - inches) / 12

		PRINT "Height in inches: " + totalInches
		PRINT "Height in feet and inches: " + feet + " '" + inches

	END OF PROGRAM

*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	int feet, inches, totalInches;

	cout << "Enter height in inches: ";
	cin >> totalInches;

	inches = totalInches % 12;
	feet = (totalInches - inches) / 12;

	cout << "Height in feet and inches: " << feet << "\'" << inches; 
	cout << "\n";
	system("Pause");

    return 0;
}

