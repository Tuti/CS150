/* 
	isPrime.cpp: 

		Will check if an integer value is prime or not

	Algorithm:

		START 

		Ask user for an integer value 
		Check integer with modulus until:
			value % counter == 0
			or
			counter == value

		if value % counter == 0 
			value is not a prime number
		else 
			value is a prime number

		print to console result
			
		END

	@author: Jose A Huerta <josehuerta115@gmail.com>
	@version: 1.0
*/


/* Includes */
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

/* Prototypes */

bool isPrime(int x);

/* Functions */

int main()
{
	int x;

	cout << "Enter an integer value: " << endl;
	cin >> x;

	if (isPrime(x))
	{
		cout << x << " is a prime number." << endl;
	}
	else
	{
		cout << x << " is not a prime number." << endl;
	}

	system("pause");
    return 0;
}

/*
 Checks if the passed value is prime or not

	@param x: integer value that is checked if it is prime
	@return: returns true if x is a prime number, returns false if x is not a prime number

*/
bool isPrime(int x)
{
	bool isPrime = true;
	int counter = 2;


	while (isPrime && counter < x)
	{
		if (x % counter == 0)
		{
			isPrime = false;
		}

		counter++;
	}

	return isPrime;
}

