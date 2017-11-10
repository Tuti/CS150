#include "stdafx.h"
#include "Snack.h"

using namespace std;
/*** Start Defintions of Snack Class ***/

Snack::Snack()
{
	this->name = "";
	this->cost = 0.0;
}

Snack::Snack(const string name, const double cost)
{
	this->name = name;
	this->cost = cost;
}

Snack::~Snack()
{
	
}

/* Getters */
string Snack::getName()
{
	return name;
}

double Snack::getCost()
{
	return this->cost;
}

/* Setters */
void Snack::setName(const string name)
{
	this->name = name;
}

void Snack::setCost(const double cost)
{
	this->cost = cost;
}

