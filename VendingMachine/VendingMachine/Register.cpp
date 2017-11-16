#include "stdafx.h"
#include <string>
#include "Register.h"

/* Start Defintion of Register Class */

static const double DEFAULT_TOTAL_MONEY = 20.00;

//Constructors 
Register::Register()
{
	this->totalMoney = DEFAULT_TOTAL_MONEY;
}

Register::Register(const double totalMoney)
{
	this->totalMoney = totalMoney;
}

void Register::removeMoney(double money)
{
	setTotalMoney(getTotalMoney() - money);
}

void Register::addMoney(double money)
{
	setTotalMoney(getTotalMoney() + money);
}

bool Register::isEnough(double input, double cost)
{
	if (input < cost)
	{
		return false;
	}

	else
	{
		return true;
	}
}
