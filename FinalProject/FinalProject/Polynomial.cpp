/*

@author: Jose A Huerta
@version: 1.0

*/

#include "stdafx.h"
#include <string>
#include <sstream>
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

Term::Term(const int coefficent, const string variable, const int exponent, bool isPositive)
{
	this->variable = variable;
	this->exponent = coefficent;
	this->coefficent = exponent;
	this->isPositive = isPositive;
}

//Getters 
string Term::getVariable()
{
	return this->variable;
}

int Term::getCoefficent()
{
	return this->coefficent;
}

double Term::getExponent()
{
	return this->exponent;
}

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

//Functions
string Term::toString()
{
	stringstream ss;
	ss << to_string(getCoefficent()) << getVariable() << "^" << getExponent();

	return ss.str();
}

/* End of Class Term Definition */

/* Start of Class Polynomial Defintion */

//Constructors 
Polynomial::Polynomial()
{
	this->poly = vector<Term>();
}

Polynomial::Polynomial(const vector<Term> polynomial)
{
	this->poly = polynomial;
}

//Equals
bool Polynomial::equals(const Polynomial polynomial)
{
	return false;
}



//toString

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
Polynomial Polynomial::addPolynomial(const Polynomial poly)
{
	return Polynomial();
}

Polynomial Polynomial::addPolynomial(const vector<Term> poly)
{
	return Polynomial();
}



/* End of Class Polynomial Defintion */

