
#pragma once
#include "stdafx.h"
#include <string>
#include <vector>
using namespace std;

class Term
{
	string variable;
	int coefficent;
	double exponent;
	bool isPositive;

public:

	//Constructors 
	Term();
	Term(const int coefficent, const string variable, const int exponent, bool isPositive);

	//Getters 
	string getVariable();
	int getCoefficent();
	double getExponent();
	bool getIsPositive();

	//Setters 
	void setVariable(const string variable);
	void setCoefficent(const int coefficent);
	void setExponent(const int exponent);
	void setIsPositive(const bool isPositive);

	//Functions
	string toString();

};

class Polynomial
{
	//Data Fields
	vector<Term> poly;
	
	//Constructors 
	Polynomial();
	Polynomial(const vector<Term> polynomial);

	//Equals
	bool equals(Polynomial polynomial);

	//toString
	string toString();

	//Getters 
	vector<Term> getPolynomial();

	//Setters
	void setPolynomial(const vector<Term> polynomial);

	//Functions
	Polynomial addPolynomial(const Polynomial poly);
	Polynomial addPolynomial(const vector<Term> poly);
	
};


