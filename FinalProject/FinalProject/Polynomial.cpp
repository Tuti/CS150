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
		coeff *= -1;
		this->isPositive = false;
	}
	ss << to_string(this->getCoefficent()) << this->getVariable() << "^" << this->getExponent();

	return ss.str();
}

//Functions 
bool Term::likeTerm(Term term)
{
	return this->getVariable().compare(term.getVariable()) &&
		this->getExponent() == term.getExponent();

}

int Term::compareVariable(Term term)
{
	return compareVariable(this->getVariable(), term.getVariable());
}

int Term::compareVariable(string var1, string var2)
{
	if (var1.length() < 1 || var2.length() < 1)
	{
		return 0;
	}
	else
	{
		if (var1.at(0) < var2.at(0))
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
}

int Term::compareExponent(Term term)
{
	return compareExponent(this->getExponent(), term.getExponent());
}

int Term::compareExponent(int exponent1, int exponent2)
{
	if (exponent1 > exponent2)
	{
		return -1;
	}
	else if (exponent1 < exponent2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int Term::compare(Term term)
{

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
Polynomial Polynomial::add(const Polynomial poly)
{




	return Polynomial();
}

Polynomial Polynomial::add(const vector<Term> poly)
{





	return Polynomial();
}

void Polynomial::sort()
{

}

/* End of Class Polynomial Defintion */

