#pragma once
#include <string>
#include "stdafx.h"

using namespace std;

class Register
{
	/* Declarations */
	double totalMoney;
	double inputAmount;
	double amountReturned;

	/* Constructors */
	Register();
	Register(const double totalMoney, const double inputAmount, const double amountReturned);

	/* Destructors */
	~Register();

	/* Getters */
	double getTotalMoney();
	double getInputAmount();
	double getAmountReturned();

	/* Setters */
	void setTotalMoney(const double totalMoney);
	void setInputAmount(const double inputAmount);
	void setAmountReturned(const double amountReturned);

	/* Functions */


};

