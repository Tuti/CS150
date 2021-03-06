/*
	Scores.cpp:
		Takes in 20 integer type scores and finds the amount of perfect scores(100).

	Algorithm:

	START 

	Take in userinput for 20 scores and store them in an array
		Make a function that is called by a for loop 20 times to fill the array
	Pass the arrary into a function called countPerfect that returns an int
		this function will run through the array and increment int perfects if a value in the array is == to 100
		returns perfects
	Store perfects into a value in the main function
	Print to console amount of perfect scores 
	
	END

	@author: Jose A Huerta <josehuerta115@gmail.com>
	@version: 1.0

*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//Prototypes
int countPerfect(int scores[], int length);
int getValue();

int main()
{
	int scores[20];
	int perfectCount;
	int something[10];
	for (int i = 0; i < 20; i++)
	{
		scores[i] = getValue();
	}

	perfectCount = countPerfect(scores, 20);
	cout << "\nPerfect Scores: " << perfectCount << endl;

	system("pause");
	return 0;



}

int countPerfect(int scores[], int length)
{
	int perfects = 0;
	for (int i = 0; i < length; i++)
	{
		if (scores[i] == 100)
		{
			perfects++;
		}
	}
	return perfects;
}


int getValue()
{
	int temp;

	cout << "Enter a value from 0 - 100" << endl;
	cin >> temp;

	if (temp < 0 || temp > 100)
	{
		cout << "You must stay in between the set range!";
		temp = getValue();
	}
	return temp;
}

