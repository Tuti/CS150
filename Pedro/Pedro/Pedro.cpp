//
//  main.cpp
//  Chap 6 Programming Challenges #16
//
/*
Declare a function void validation(int daysSpent, double dailyRate, double serviceChargesIn, double medicationChargesIn, double serviceChargesOut, double medicationChargesOut)
Use an if statement to validate that each one of the parameters is greater than zero
Declare a function double totalCharges( int daysSpent, double dailyRate, double serviceChargesIn, double medicationChargesIn)
Declare a function double totalCharges( double serviceChargesOut, double medicationChargesOut)

For an inpatient calculate totalChargesIn = (daysSpent*dailyRate) + serviceChargesIn + medicationChargesIn
For outpatient totalChargesOut = serviceChargesOut + medicationChargesOut

Each one should return totalChargesIn and totalChargesOut, respectively

In the main function, the user should be prompted to choose whether they are an inpatient or an outpatient.
Once chosen, the user should be prompted to input the amounts for either inpatient or outpatient.

Once entered the overloaded functions should be called to calculate the total charges.

The total charges should then be outputted to the user

@author: Pedro Suazo <pedrosuazo10@gmail.coml>
@version: 1.0

*/
//

/*** Includes ***/
#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


/*** Prototypes ***/
int validation(string message, int parameter);
double validation(string message, double parameter);
double totalCharges(int daysSpent, double dailyRate, double serviceChargesIn, double medicationChargesIn);
double totalCharges(double serviceChargesOut, double medicationChargesOut);

/*** Functions ***/

int main()
{

	int holdscreen, choice, daysSpent;
	double dailyRate, serviceCharges, medicationCharges, totalCost;

	cout << "1. Inpatient" << endl;
	cout << "2. Outpatient" << endl;
	cin >> choice; 

	while (choice < 1 || choice > 2)
	{
		cout << "Input a valid choice!" << endl << endl;
		cin >> choice;
	}

	switch(choice)
	{
		case 1: //INPATIENT
			cout << "Enter the following information for an inpatient" << endl;
			daysSpent = validation("Enter days spent: ", 0);
			dailyRate = validation("Enter daily rate: ", 0.0);
			serviceCharges = validation("Enter service charges: ", 0.0);
			medicationCharges = validation("Enter medication charges: ", 0.0);
			totalCost = totalCharges(daysSpent, dailyRate, serviceCharges, medicationCharges);
			break; 

		case 2: //OUTPATIENT
			cout << "Enter the following information for an outpatient" << endl;
			serviceCharges = validation("Enter service charges: ", 0.0);
			medicationCharges = validation("Enter medication charges: ", 0.0);
			totalCost = totalCharges(serviceCharges, medicationCharges);
			break;
		default: 
			cout << "You should not have hit this case..." << endl;
			break;
	}

	cout << fixed << showpoint << setprecision(2);
	cout << "Total Charges: $" << totalCost << endl;
	cin >> holdscreen;
	return 0;

}

int validation(string message, int parameter)
{
	int userinput;
	cout << message;
	cin >> userinput;

	if(userinput < parameter)
	{
		cout << "Enter a valid input!" << endl << endl;
		return validation(message, parameter);
	}

	return userinput;
}

double validation(string message, double parameter)
{
	double userinput;
	cout << message << " $";
	cin >> userinput;

	if (userinput < parameter)
	{
		cout << "Enter a valid input!" << endl << endl;
		return validation(message, parameter);
	}

	return userinput;
}

double totalCharges(int daysSpent, double dailyRate, double serviceChargesIn, double medicationChargesIn)
{
	double totalChargesIn = 0;

	totalChargesIn = (daysSpent*dailyRate) + serviceChargesIn + medicationChargesIn;

	return(totalChargesIn);
}

double totalCharges(double serviceChargesOut, double medicationChargesOut)
{
	double totalChargesOut;

	totalChargesOut = serviceChargesOut + medicationChargesOut;

	return(totalChargesOut);
}

