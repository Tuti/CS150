
#pragma once
#include "stdafx.h"
#include <string>
#include <vector>
using namespace std;

class Term
{
	//Private Variables
	string variable;
	int coefficent;
	int exponent;
	bool isPositive;

	//Private Functions 
	int compareVariable(Term term);
	int compareVariable(string var1, string var2);
	int compareExponent(Term term);
	int compareExponent(int exponent1, int exponent2);

public:

	//Constructors 
	Term();
	Term(const int coefficent, const string variable, const int exponent);

	//Getters 
	string getVariable();
	int getCoefficent();
	int getExponent();
	bool getIsPositive();

	//Setters 
	void setVariable(const string variable);
	void setCoefficent(const int coefficent);
	void setExponent(const int exponent);
	void setIsPositive(const bool isPositive);

	//Equals
	bool equals(Term &term);

	//toString
	string toString();

	//Functions
	int compare(Term term);
	bool likeTerm(Term term);
	Term add(Term term);
};

class Polynomial
{
	//Data Fields
	vector<Term> poly;
	
public:

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
	vector<Term> add(Polynomial poly);
	//vector<Term> add(vector<Term> poly); 
	void sort();
};


