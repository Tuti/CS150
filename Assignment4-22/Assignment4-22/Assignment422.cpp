// Assignment422.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

/* Constants */
const double PACKAGE_A_COST = 39.99;
const double PACKAGE_B_COST = 59.99;
const double PACKAGE_C_COST = 69.99;

const double PACKAGE_A_EXTRA_MINUTE_COST = .45;
const double PACKAGE_B_EXTRA_MINUTE_COST = .40;

const int PACKAGE_A_MINUTES = 450;
const int PACKAGE_B_MINUTES = 900;
const int PACKAGE_C_MINUTES = -1;


/* Variables */

char package;
int minutes;
double actualCost;

char askUserPackage()
{
	char package;
	cout << "Enter package type: ";
	cin >> package;

	return package;
}

int askUserMinutesUsed()
{
	int minutes;
	cout << "Enter minutes used: ";
	cin >> minutes;

	return minutes;
}

double packageACost(int minutesUsed)
{
	double cost = PACKAGE_A_COST;
	int penalty = 0;

	if (minutesUsed > PACKAGE_A_MINUTES)
	{

		penalty = (minutesUsed - PACKAGE_A_MINUTES) * PACKAGE_A_EXTRA_MINUTE_COST)
		cost += penalty
	}

	return cost;
}

double packageBCost(int minutesUsed)
{
	double cost = PACKAGE_B_COST;
	int penalty = 0;

	if (minutesUsed > PACKAGE_B_MINUTES)
	{

		penalty = ((minutesUsed - PACKAGE_B_MINUTES) * PACKAGE_B_EXTRA_MINUTE_COST);
		cost += penalty;
	}

	return cost;
}

double packageCCost(int minutesUsed)
{
	double cost = PACKAGE_C_COST;

	return cost;
}

bool isBetterPriceAvailable(double actualCost, double otherPackage1, double otherPackage2)
{
	if (actualCost < otherPackage1 && actualCost < otherPackage2)
	{
		return false;
	}

	return true;
}

double calculateCost(char package, int minutes)
{
	switch (package)
	{
		case 'a':
			return packageACost(minutes);
			break;
		case 'b':
			return packageBCost(minutes);
			break;
		case 'c':
			return packageCCost(minutes);
			break;
		default: 
			return 1;
			break
	}

	return 1;
}

void printMessage(double actualCost)
{

	otherCost1 = calculateCost(8);


	if (isBetterPriceAvailable(actualCost, ))
	{

	}
}


void findUserTotal()
{

	package = askUserPackage();
	minutes = askUserMinutesUsed();

	actualCost = calculateCost(package, minutes);

	
}



int main()
{
	findUserTotal();
    return 0;
}

