/*
	Rainfall.cpp:
	takes in amount of rainfall for each month and does calculations and prints to screen a report

	Algorithm:

	Create 2 arrays, one that will hold the month names and another for the rainfall amount
	Make a function that will populate the amount of rainfall for each month in the array 
	Make a function that will calculate total rainfall which uses a for loop that goes through
		the entire array and adds every value to a double value and returns that value
	Make an average function that uses total function and then divides by 12 for the amount of months in a year
	Make a function that finds index of the driest month by using a for loop that compares the value of the "lowest" by the next 
		value in the array and continues from there until finished. Once done, return that index
	Make a function that finds index of the wettest month, similar as driest only this time finding month with most amount of rain

	@author: Jose A Huerta <josehuerta115@gmail.com>
	@version: 1.0

*/

#include "stdafx.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

//Prototypes
void getData(string months[], double rainfall[]);
double totalRainfall(double rainfall[]);
double averageRainfall(double rainfall[]);
int driestMonth(double rainfall[]);
int wettestMonth(double rainfall[]);
void printRainReport(double rainfall[], string months[]);

int main()
{
	string months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	double rainfall[12];

	getData(months, rainfall);

	cout << "\n";
	printRainReport(rainfall, months);
	cout << "\n";

	system("pause");
	return 0;
}

void getData(string months[], double rainfall[])
{
	for (int i = 0; i < 12; i++)
	{
		cout << "Enter the amount of rainfall for the month of " << months[i] << endl;
		cin >> rainfall[i];
	
		while (rainfall[i] < 0)
		{
			cout << "Enter a valid number!" << endl;
			cin >> rainfall[i];
		}
	}
}

double totalRainfall(double rainfall[])
{
	double totalRainfall = 0;

	for (int i = 0; i < 12; i++)
	{
		totalRainfall += rainfall[i];
	}

	return totalRainfall;
}

double averageRainfall(double rainfall[])
{
	double total, average;
	
	total = totalRainfall(rainfall);
	average = total / 12.00;

	return average;
}

int driestMonth(double rainfall[])
{
	 int driest = 0;

	for (int i = 1; i < 12; i++)
	{
		if (rainfall[i] < rainfall[driest])
		{
			driest = i;
		}
	}
	
	return driest;
}

int wettestMonth(double rainfall[])
{
	int wettest = 0;

	for (int i = 1; i < 12; i++)
	{
		if (rainfall[i] > rainfall[wettest])
		{
			wettest = i;
		}
	}

	return wettest;
}

void printRainReport(double rainfall[], string months[])
{
	int driest_month, wettest_month;
	
	driest_month = driestMonth(rainfall);
	wettest_month = wettestMonth(rainfall);

	cout << fixed << showpoint << setprecision(2);
	cout << "Total Rainfall: " << totalRainfall(rainfall) << endl;
	cout << "Average Monthly Rainfall: " << averageRainfall(rainfall) << " inches" << endl;
	cout << "Least amount of rainfall in " << months[driest_month] << " with " << rainfall[driest_month] << " inches" << endl;
	cout << "Most amount of rainfall in " << months[wettest_month] << " with " << rainfall[wettest_month] << " inches " << endl;
 }
