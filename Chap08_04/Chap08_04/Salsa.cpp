/*

	Salsa.cpp:
		takes in user input and prints a report to console on salsas sold

	Algorithm:

		START

		Take in user input for amount of salsa's sold
		Store those values inside an integer array
		find the highest and lowest values inside the amount sold array
		Print a report to console using a for loop to efficently display all info from arrays
		 
		END


	@author: Jose A Huerta <josehuerta115@gmail.com>
	@version: 1.0

*/

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

//Prototypes
int findLowest(int table[], int length);
int findHighest(int table[], int length);

int main()
{
	string salsaNames[] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
	int salsaSold[5];
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter amount of " << salsaNames[i] << " salsas sold: " << endl;
		
		cin >> salsaSold[i];
		while (salsaSold[i] < 0)
		{
			cout << "Enter a valid number!" << endl;
			cin >> salsaSold[i];
		}
	}

	cout << "\nSales Report: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << salsaNames[i] << ":\t\t" << salsaSold[i] << " sold" << endl;
	}
	
	int lowestIndex = findLowest(salsaSold, 5);
	int highestIndex = findHighest(salsaSold, 5);

	cout << "Most Sold: " << salsaNames[highestIndex] << endl;
	cout << "Least Sold: " << salsaNames[lowestIndex] << endl;
	system("pause");
	return 0;

}

int findLowest(int table[], int length)
{
	int lowest = 0;

	for (int i = 1; i < length; i++)
	{
		if (table[i] < table[lowest])
		{
			lowest = i;
		}
	}

	return lowest;
}

int findHighest(int table[], int length)
{
	int highest = 0;

	for (int i = 1; i < length; i++)
	{
		if (table[i] > table[highest])
		{
			highest = i;
		}
	}

	return highest;
}