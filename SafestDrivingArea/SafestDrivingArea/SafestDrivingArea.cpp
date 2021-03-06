/* 
	SafestDrivingArea.cpp: 
			Will calculate the safest driving area from 5 regions of a city



	Algorithm:

	Call getNumAccidents and pass a region name
		getNumAccidents will ask the user for an amount of accidents that have occrued
		will return that value back, save that value into a int variable
		do until all regions have a value

	pass all values into findLowest()
		findlowest will calculate the lowest amount of the 5 variables 
		set lowest to first parameter
			if lowest > nextparameter 
			set lowest to next parameter and continue until finished

		Print to console lowest and region name


	@group2:  Luis Rodriguez, Jerry Coe, Justin Rivera, Victoria Allan
	@verison 1.0;

*/

/* Includes */
#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std; 

/* Declarations */
string region[5];
int accidents[5];

/* Prototypes */
int getNumAccidents(string region);
void fillRegionArray();
void findLowest(int accidents[]);


/* Functions */

int main()
{
	fillRegionArray();
	for (int i = 0; i < 5; i++)
	{
		accidents[i] = getNumAccidents(region[i]);
	}
	findLowest(accidents);

	system("pause");
    return 0;
}

void findLowest(int accidents[])
{
	int lowest = 0;

	for (int i = 1; i < 5; i++)
	{
		if (accidents[lowest] > accidents[i])
		{
			lowest = i;
		}
	}
	
	cout << "Region: " << region[lowest] << "\nAccidents: " << accidents[lowest] << endl;
}

int getNumAccidents(string region)
{
	int temp = 0;

	cout << "Enter number of automobile accidents in region: " << region << endl;
	cin >> temp;
	
	if (temp < 0)
	{
		cout << "Enter a valid number! " << endl;
		temp = getNumAccidents(region);
	}
	return temp;
}

void fillRegionArray()
{
	region[0] = "North";
	region[1] = "South";
	region[2] = "East";
	region[3] = "West";
	region[4] = "Central";

}
