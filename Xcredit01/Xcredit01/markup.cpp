
/* 
	markup.cpp:

	will calculate the retail cost of an item when given its wholesale cost.

	Algorithm: 

	START 

	Ask user for wholesale cost
	Ask user for markup percentage
	Calculate wholesale cost * markup percentage and add to wholesale cost
	Print to console retail amount to user

	END

	@author: Jose A Huerta <josehuerta115@gmail.com>
	@version: 1.0

*/


/* Includes */

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/* Prototypes */

double CalculateRetail(const double wholesale, const double markupPercent);
double GetInputFromUser(string message, double parameter1, double parameter2);

/* Functions */
int main()
{
	double wholesale, markupPercentage, retail;

	wholesale = GetInputFromUser("Enter the wholesale cost of an item: ", 0.0, 999999999999.0);
	markupPercentage = GetInputFromUser("Enter the markup percentage as a decimal of an item", 0.0, 999999.0);
	retail = CalculateRetail(wholesale, markupPercentage);

	cout << fixed << showpoint << setprecision(2);
	cout << "Retail Cost: $" << retail << endl;

	system("pause");
    return 0;
}


/* 
 Calculates retail cost of an item when given the wholesale amount and markup percent

	@param wholesale: wholesale cost of item
	@param markupPercent: percent of cost to be added to wholesale cost
	@return: retail cost of item 
		
*/
double CalculateRetail(const double wholesale, const double markupPercent)
{
	double retailCost, markup;

	markup = wholesale * markupPercent; // calcualates amount to be added
	retailCost = wholesale + markup; // adds markup amount to retail cost of item 

	return retailCost;
}

/*
 Displays messages and expects an input from user of a double value within the given parameters

	@param message: message that will be displayed to user of what value they are entering for
	@param parameter1: first parameter that is checked if input if less than 
	@param parameter2: second paramerter that is checked if input is greater than
	@return: user input value that passed both checks of parameter1 and parameter2 

*/
double GetInputFromUser(string message, double parameter1, double parameter2)
{
	double input = 0.0;
	cout << message << endl;
	cin >> input;

	if (input < parameter1 || input > parameter2)
	{
		cout << "Enter a valid input!" << endl << endl;
		GetInputFromUser(message, parameter1, parameter2);
	}

	return input;
}







