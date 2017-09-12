/* 
	Programmer: Jose A Huerta
	Course: CS150
	Professor: June Porto
	Assignment: 2.4

	Algorithm:

	* Ask user for subtotal amount of meal
	* Ask user for tax rate for the meal 
	* Ask user for tip rate for the meal 
	* Find tip: tipRate * subtotal = tip
	* Find totalCost
	* Display subtotal, tip, totalCost
	* END OF PROGRAM

*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double subtotal, taxRate, tipRate, tip, total, temp;
	
	cout << "Enter the sub-total amount of the meal: ";
	cin >> subtotal;

	cout << "Enter the tax rate (decimal): ";
	cin >> taxRate;

	cout << "Enter the tip percentage of meal (decimal): ";
	cin >> tipRate;

	tip = subtotal * tipRate;
	total = subtotal + tip + (subtotal * taxRate);
	cout.precision(4);
	cout << "Subtotal: " << subtotal << "\n";

	cout << "Tip: " << tip << "\n";
	cout << "Total: " << total << "\n";

	system("Pause");

    return 0;
}