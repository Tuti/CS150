/*
	Algorithm: 

	START OF PROGRAM 

	Ask user for amount of packages purchased
	if amount < 0, make user reenter amount purchased
	Save input from user 
	Get cost = amount * 199.00
	if amount < 10, no discount
	if amount >= 10 and <= 19, 20 percent discount
	if amount >= 30  and <= 49, 30 percent discount
	if amount >= 40 and <= 99, 40 perecent discount
	if amount >= 100, 50 percent 

	if discount != 1 -> totalCost = totalCost = cost - (cost * discountRate)
	else totalCost = totalCost = cost

	print total to screen 

	END OF PROGRAM

	@author Jose A Huerta <josehuerta115@gmail.com>
	@version 1.0


*/

#include "stdafx.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

/* CONSTANTS */
const double PACKAGE_COST = 199.00;

/* Functions */
int userPurchaseAmount()
{
	int amountPackages;

	cout << "Enter amount of packages purchased: ";
	cin >> amountPackages;

	if (amountPackages <= 0)
	{
		cout << "Amount must be a valid number greater than 0." << endl;
		userPurchaseAmount();
	}

	return amountPackages;
}

double calculateDiscount(int amount)
{
	if (amount >= 10 && amount <= 19)
	{
		return .2; //20% discount
	}
	else if (amount >= 20 && amount <= 49)
	{
		return .3; //30% discount
	}
	else if (amount >= 50 && amount <= 99)
	{
		return .4; //40% discount
	}
	else
	{
		return .5; //50% discount
	}

	return 1; // no discount
}

void printTotalCost() 
{
	int amount;
	double cost, discountRate, totalCost;

	amount = userPurchaseAmount();
	cost = amount * PACKAGE_COST;
	discountRate = calculateDiscount(amount);
	
	if (discountRate < 1)
	{
		totalCost = cost - (cost * discountRate);
	}
	else
	{
		totalCost = cost;
	}

	cout << setprecision(2) << fixed;

	cout << "Item Amount Purchased: " << amount << " Total Cost: " << totalCost << endl;
}

int main() 
{
	printTotalCost();
	
	system("pause");
    return 0;
}

