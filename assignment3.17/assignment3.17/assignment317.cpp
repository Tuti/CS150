// assignment317.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const double PROPERTY_TAX_PERCENTAGE = .6;

double askUser(string message)
{
	double input;
	cout << "Enter " << message;
	cin >> input;

	return input;
}


double calculateTax(double propertyTotal, double taxRatio)
{
	double taxRate, taxTotal;
	
	taxRate = taxRatio / 100.00;
	taxTotal = (propertyTotal * PROPERTY_TAX_PERCENTAGE) * taxRate;

	return taxTotal;
}



int main()
{

	double propertyTotal, taxTotal, taxRatio, taxRate;

	propertyTotal = askUser("value of total property: ");
	taxRatio = askUser("tax per 100$ ratio: $");
	taxTotal = calculateTax(propertyTotal, taxRatio);
	
	cout << setprecision(2) << fixed << "Total Annual Property Tax: " << taxTotal << endl;

	system("pause");
	return 0;

}

