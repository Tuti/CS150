/* 
group: Jose A Huerta, Maddy Cuppett, Luis Rodriguez, Nicholas Provencal, Mikhail Ottewell 

Algorithm:
	
	Create several functions that will each do their own blocks of code
		initialize double and int to 0, char to ''
		divide 3 different values by a denominator 
		display 3 integers that the user entered that keep increasing
		display the largest number from a list of numbers the user entered
		display the smallest number from a list of numbers the user entered
		display the definitions of 2 overloaded functions
		make a function that manipulates a global variable
		make a function that uses a static variable
		write a function that has 3 parameters

*/

#include "stdafx.h"
#include <string>
#include <iostream>

/* Declarations */
int value;
/* Prototypes */
void initializeZeroandBlank();
void divideThreeValues(double values[]);
void increasingOrder();
void smallestNumber();
void printSomething(const std::string message);
void printSomething();
void numberNine(double &value);
void setGlobal();
void setStatic();


/* Functions */
int main()
{
	double values[3];
	double something;
	values[0] = 1.0;
	values[1] = 2.0;
	values[2] = 3.0;

	initializeZeroandBlank();
	divideThreeValues(values);
	increasingOrder();
	smallestNumber();
	printSomething("Hi june.");
	printSomething();
	numberNine(something);


	char count = 'y';
	while (count == 'y' || count == 'Y')
	{
		setGlobal();
		std::cout << "do you want to change the global variable again? (y/n): ";
		std::cin >> count;
		std::cin.get();
		std::cout << std::endl;
	}

	count = 'y';
	while (count == 'y' || count == 'Y')
	{
		setStatic();
		std::cout << "do you want to change the static variable again? (y/n): ";
		std::cin >> count;
		std::cin.get();
		std::cout << std::endl;
	}

	system("pause");
	return 0;

}

void initializeZeroandBlank()
{
	double x = 0;
	int y = 0;
	char blank = ' ';

	std::cout << "x value: " << x << std::endl;
	std::cout << "y value: " << y <<std:: endl;
	std::cout << "blank value: " << blank << std::endl;

}

void divideThreeValues(double values[])
{
	double denominator = 2.0;

	std::cout << "Before division" << std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Value: " << std::to_string(values[i]) << std::endl;
		values[i] = values[i] / denominator;
	}
	
	std::cout << "After division" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Value: " << std::to_string(values[i]) << std::endl;
	}

}

void increasingOrder()
{
	int	values[3];

	std::cout << "Enter value 1: " << std::endl;
	std::cin >> values[0];

	std::cout << "Enter value 2: " << std::endl;
	std::cin >> values[1];

	std::cout << "Enter value 3: " << std::endl;
	std::cin >> values[2];

	int lowest, highest;

	lowest = 0;
	highest = 0;

	for (int i = 1; i < 3; i++)
	{
		if (values[lowest] > values[i])
		{
			lowest = i;
		}
	}

	for (int i = 1; i < 3; i++)
	{
		if (values[highest] < values[i])
		{
			highest = i;
		}
	}
	
	int middle;

	if ((lowest == 0 && highest == 2) || (lowest == 2 && highest == 0))
	{
		middle = 1;
	}

	if ((lowest == 1 && highest == 2) || (lowest == 2 && highest == 1))
	{
		middle = 0;
	}

	if ((lowest == 0 && highest == 1) || (lowest == 1 && highest == 0))
	{
		middle = 2;
	}
	std::cout << values[lowest] << " " << values[middle] << " " << values[highest] << std::endl;

}

void smallestNumber()
{
	int values[5];
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter a value" << std::endl;
		std::cin >> values[i];
	}

	int lowest = 0;
	for (int i = 0; i < 5; i++)
	{
		if (values[lowest] > values[i])
		{
			lowest = i;
		}
	}

	std::cout << "smallest value: " << std::to_string(values[lowest]) << std::endl;
}

void printSomething(const std::string message)
{
	std::cout << message << std::endl;
}

void printSomething()
{
	std::cout << "Hi I printed something!" << std::endl;
}

void numberNine(double &something)
{
	something += 5;
}

void setGlobal()
{
	
	value++;
	std::cout << "the value of the global variable is now: " << value;
	std::cout << std::endl;
}

void setStatic()
{
	static int x;
	x++;
	std::cout << "the value of the static variable is now: " << x;
	std::cout << std::endl;
}
