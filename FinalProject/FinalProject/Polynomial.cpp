/*

@author: Jose A Huerta
@version: 1.0

*/

#include "stdafx.h"
#include <string>
#include <sstream>
#include <iostream>
#include "Polynomial.h"

/* Start of Class Term Defintion */

//Constructors
Term::Term()
{
	this->variable = "";
	this->exponent = 0;
	this->coefficent = 0;
	this->isPositive = true;
}

Term::Term(const int coefficent, const string variable, const int exponent)
{
	this->coefficent = coefficent;
	this->variable = variable;
	this->exponent = exponent;
	
	if (coefficent < 0)
	{
		this->isPositive = false;
	}
	else
	{
		this->isPositive = true;
	}
}

//Getters 

/*
	Returns this variable

*/
string Term::getVariable()
{
	return this->variable;
}


/*
	Returns coefficent
*/
int Term::getCoefficent()
{
	return this->coefficent;
}

/*
	returns exponent
*/
int Term::getExponent()
{
	return this->exponent;
}

/*
	returns isPositive
*/
bool Term::getIsPositive()
{
	return this->isPositive;
}

//Setters
void Term::setVariable(const string variable)
{
	this->variable = variable;
}

void Term::setCoefficent(const int coefficent)
{
	this->coefficent = coefficent;
}

void Term::setExponent(const int exponent)
{
	this->exponent = exponent;
}

void Term::setIsPositive(const bool isPositive)
{
	this->isPositive = isPositive;
}

//Equals 
bool Term::equals(Term &term)
{

	return this->getCoefficent() == term.getCoefficent() &&
		this->getVariable().compare(term.getVariable()) &&
		this->getExponent() == term.getExponent();
}

//toString
string Term::toString()
{
	stringstream ss;
	int coeff = this->getCoefficent();
	
	if (coeff < 0)
	{
		coeff =  coeff * -1;
		this->isPositive = false;
	}
	ss << to_string(coeff) << this->getVariable() << "^" << this->getExponent();

	return ss.str();
}

//Functions 

/*
	Finds if passed in term is a like term with this term
*/
bool Term::likeTerm(Term term)
{
	return this->getVariable() == term.getVariable() &&
		this->getExponent() == term.getExponent();
}

/* 
	Helper class to start recursive compareVariable
*/
int Term::compareVariable(Term term)
{
	return compareVariable(this->getVariable(), term.getVariable());
}

/*
	Recursive call that compares variable and determines position based on return value 
*/
int Term::compareVariable(string var1, string var2)
{
	if (var1.length() < 1 || var2.length() < 1)
	{
		return 0;
	}
	else if (var1.at(0) < var2.at(0))
	{
		return -1;
	}
	else if (var1.at(0) > var2.at(0))
	{
		return 1;
	}
	else
	{
		return compareVariable(var1.substr(1), var2.substr(1));
	}
}

/*
	used in compare, finds which exponent is larger
*/
int Term::compareExponent(Term term)
{
	return compareExponent(this->getExponent(), term.getExponent());
}

int Term::compareExponent(int exponent1, int exponent2)
{
	if (exponent1 < exponent2)
	{
		return 1; //exponent1 moves left
	}
	else if (exponent1 > exponent2)
	{
		return -1; //exponent2 stays
	}
	else
	{
		return 0; //equal, nothing happens
	}
}

/* 
	adds 2 terms together
*/
Term Term::add(Term term)
{
	Term term1(this->getCoefficent() + term.getCoefficent(), this->getVariable(), this->getExponent());

	return term1;
}

/* 
	compares term
*/
int Term::compare(Term term)
{
	int result;

	result = compareVariable(term);
	if (result == 0)
	{
		result = compareExponent(term);
	}

	return result;
}

/* End of Class Term Definition */

/* Start of Class Polynomial Defintion */

//Constructors 
Polynomial::Polynomial()
{
	//default
	this->poly = vector<Term>();
}

Polynomial::Polynomial(const vector<Term> polynomial)
{
	this->poly = polynomial;
}

//Equals
bool Polynomial::equals(const Polynomial polynomial)
{
	//TODO Equals function
	return false;
}

//toString
string Polynomial::toString()
{
	if (poly.size() == 0)
	{
		return "";
	}

	stringstream ss;

	if (!poly[0].getIsPositive())
	{
		ss << "-" << poly[0].toString();
	}
	else
	{
		ss << poly[0].toString();
	}

	for (int i = 1; i < this->poly.size(); i++)
	{
		if (poly[i].getIsPositive())
		{
			ss << " + " << poly[i].toString();
		}
		else
		{
			ss << " - " << poly[i].toString();
		}
	}

	return ss.str();
}


//Getters
vector<Term> Polynomial::getPolynomial()
{
	return this->poly;
}

//Setters
void Polynomial::setPolynomial(const vector<Term> polynomial)
{
	this->poly = polynomial;
}

//Functions

/*
	adds a polynomial object together
*/
vector<Term> Polynomial::add(Polynomial polynomial)
{
	vector<Term> addedTo = this->getPolynomial();
	vector<Term> addedFrom = polynomial.getPolynomial(); //vector from passed in parameter
	vector<Term> finished = vector<Term>();

	cout << addedTo.size() << endl;
	cout << addedFrom.size() << endl;

	
	for (int i = 0; i < addedTo.size(); i++)
	{
		cout << "Inside 1st for loop" << endl;
		for (int j = 0; j < addedFrom.size(); j++)
		{
			cout << "Inside 2nd forloop" << endl;
			cout << addedTo[i].toString() << endl;
			cout << addedFrom[j].toString() << endl;

			if (addedTo[i].likeTerm(addedFrom[j]) == 1)
			{
				cout << "Like term found" << endl;
				Term term = addedTo[i].add(addedFrom[j]);
				cout << term.toString() << endl;
				finished.push_back(term);
				addedFrom.erase(addedFrom.begin() + j);
			}
		}
	}
	
	for (int i = 0; i < finished.size(); i++)
	{
		cout << finished[i].toString() << " ";
	}
	cout << endl;
	return finished;
}


/*
	sorts polynomial 
*/
void Polynomial::sort()
{
	//BubbleSort Algorithm
	vector<Term> sorted = vector<Term>();
	Term temp;
	bool swapped;
	int result = 0;
	
	do
	{
		swapped = false;
		for (int i = 0; i < this->poly.size() - 1; i++)
		{
			result = poly[i].compare(poly[i + 1]);
			if (result == 1)
			{
				temp = poly[i];
				poly[i] = poly[i + 1];
				poly[i + 1] = temp;
				swapped = true;
			}
		}
	} while (swapped);
}

