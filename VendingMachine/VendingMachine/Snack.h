#pragma once
#include <string>
#include "stdafx.h"

using namespace std;
class Snack
{
	string name;
	double cost;

	/* Constructors */
public:
	Snack();
	Snack(const string name, const double cost);

	/* Destructor */
	~Snack();

	/* Getters */
	std::string getName();
	double getCost();

	/* Setters */
	void setName(const string name);
	void setCost(const double cost);

	/* Functions */

};
