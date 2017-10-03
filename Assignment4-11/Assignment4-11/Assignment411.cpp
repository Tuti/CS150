// Assignment411.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

//CONSTANTS
const double PI = 3.14159;

//FUNCTIONS

void menu()
{
	int choice;
	cout << "1. Calculate the Area of a Circle" << endl;
	cout << "2. Calculate the Area of a Rectangle" << endl;
	cout << "3. Calculate the Area of a Triangle" << endl;
	cout << "4. Quit Program " << endl;
	cin >> choice;

	if (choice < 1 || choice > 4)
	{
		cout << "Invalid input. Must enter a number between 1 and 4." << endl;
		menu();
	}

	switch (choice)
	{
		case 1:
			calculateCircleArea();
			break;
		case 2: 
			calculateRectangleArea();
			break;
		case 3: 
			calculateSquareArea();
			break;
		default: 
			cout << "ERROR. ";
			break;
	}

}

void restart()
{
	char choice;
	cout << "Restart? y/n" << endl;
	cin >> choice;

	if (choice == 'y')
	{
		menu();
	}
	if (choice == 'n')
	{
		cout << "Exiting. ";
		return;
	}
	else
	{
		cout << "Error with input, try again.";
		restart();
	}
}

void calculateCircleArea()
{
	double radius, area;

	cout << "Enter Radius: ";
	cin >> radius;

	area = PI * pow(radius, 2.0);

	cout << "Area: " << area << endl;
	
	restart();
}	

void calculateRectangleArea()
{
	double area, length, width;

	cout << "Enter length: ";
	cin >> length;

	cout << "Enter width: ";
	cin >> width;

	area = length * width;

	cout << "Rectangle Area: " << area;

	restart();
}

void calculateSquareArea()
{
	double area, length;

	cout << "Enter Side Length: " << endl;
	cin >> length;

	area = length * length;

	cout << "Square area: " << area;
	restart();
}

int main()
{

	menu();

	system("pause");
	return 0;

}

