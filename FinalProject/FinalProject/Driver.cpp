
/*
	Polynomial Calculator
	
	@author Jose A Huerta
	@version 1.0

	Algorithm:

	Create Class term
		class must have variable, coefficent, exponent, bool ispositive
		add getters, setters, constructors, equals, toString
		have helper functions such as compare, liketerm, add
	Create class Polynomial
		class must have vector<term> that holds a list of terms to be the complete polynomial
		create getters, setters, constructors, equals, toString

	Adding Polynomials will need to pass a polynomial object to the calling object and do stuff
		for every index in the vector<term> for each polynomial, will need to check if they are a like term and if so 
			add them together, and add the new term to a new vector that will be returned at the end
			Once finished travering through both vectors return the new vector and set the calling object's vector to the returne one
			this will ensure all values have been copied over correctly. 
	In the main, allow users to enter 2 polynomials and then add them and display to the screen the new result
	After every addition is completed, ask to continue or to end

*/


#include "stdafx.h"
#include <string>
#include <iostream>
#include "Polynomial.h"

using namespace std;

void addPolynomials();
Polynomial buildPolynomial();
Term buildTerm();

int main()
{
	addPolynomials();
	
	cin.get();
	return 0;
}

void addPolynomials()
{
	char choice;
	cout << "Enter polynomial 1: " << endl;
	Polynomial polynomial1 = buildPolynomial();
	cout << "Polynomial 1 " << polynomial1.toString() << endl;
	
	cout << "Enter polynomial 2: " << endl;
	Polynomial polynomial2 = buildPolynomial();
	cout << "Polynomial 2 " << polynomial2.toString() << endl;

	polynomial1.setPolynomial(polynomial1.add(polynomial2));
	cout << "Result: " << polynomial1.toString() << endl;
	cout << "Continue? Yes = 1, No = 2" << endl;
	cin >> choice;

	while(choice != 1 || choice != 2)
	{
		cout << "Enter valid decision! " << endl;
		cin >> choice;
	}

	if (choice == 1)
	{
		addPolynomials();
	}
	else
	{
		return;
	}

}

Polynomial buildPolynomial()
{
	vector<Term> poly = vector<Term>();
	int decision = 0;
	bool stop = false;

	do
	{
		poly.push_back(buildTerm());

		cout << "Add another term? Yes = 1, No = 2 " << endl;
		cin >> decision;

		if (decision == 2)
		{
			return poly;
		}
		
		
	} while (stop == false);

}

Term buildTerm()
{
	int coeff = 0;
	string var = "";
	int exp = 0;

	cout << "New Term: " << endl << endl;
	cout << "Coeffiecent: " << endl;
	cin >> coeff;

	cout << "Variable: " << endl;
	cin >> var;

	cout << "Exponent: " << endl;
	cin >> exp;

	return Term(coeff, var, exp);
}