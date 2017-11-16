#pragma once
#include <string>
#include "stdafx.h"

using namespace std;

class Register
{
	/* Declarations */
	double totalMoney;

public:
	/* Constructors */
	Register();
	Register(const double totalMoney);

	/* Destructors */
	~Register();

	/* Getters */
	double getTotalMoney();
	double getAmountReturned();

	/* Setters */
	void setTotalMoney(const double totalMoney);
	void setInputAmount(const double inputAmount);
	void setAmountReturned(const double amountReturned);

	/* Functions */
	bool isEnough(double input, double cost);
	void removeMoney(double money);
	void addMoney(double money);
};

