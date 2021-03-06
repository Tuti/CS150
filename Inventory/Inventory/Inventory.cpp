/*

Chap 7 problem 7

Inventory.cpp:
	Class Defintion of Item that could be used inside a inventory program that keeps track of an item's id, quantity amount
	and cost per single item


	Algorithm: 

	START 

	Create a header and cpp file both for Inventory
	Make constructors, getters, setters, and functions for the item class
	Define those functions in the cpp file
	Allow user to input values Id num, quantity in stock, and cost per single item
	Calculate totalCost for all current stock of item
	Print to screen item created from user and total cost of current stock

	END

	@author: Jose A Huerta <josehuerta115@gmail.com>
	@version: 1.0
*/



#include "stdafx.h"
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include "Inventory.h"
#include <cmath>

using namespace std;

//Prototype
double rounding(double value);


/* START DEFINTION */

//Constructors
Item::Item()
{
	this->itemNumber = 0;
	this->quantity = 0;
	this->cost = 0.0;
}

Item::Item(const int itemNumber, const int quantity, const double cost)
{
	this->itemNumber = itemNumber;
	this->quantity = quantity;
	this->cost = cost;
	
	setTotalCost(quantity * cost);
}

//Getters
int Item::getItemNumber()
{
	return this->itemNumber;
}
int Item::getQuantity()
{
	return this->quantity;
}
double Item::getCost()
{
	return this->cost;
}
double Item::getTotalCost()
{
	return this->totalCost;
}

//Setters
void Item::setItemNumber(const int itemNumber)
{
	this->itemNumber = itemNumber;
}
void Item::setQuantity(const int quantity)
{
	this->quantity = quantity;
}
void Item::setCost(const double cost)
{
	this->cost = cost;
}

void Item::setTotalCost(const double totalCost)
{
	this->totalCost = totalCost;
}

//Functions 
string Item::toString()
{
	double costRounded = rounding(getCost());
	cout << costRounded << endl;

	return "ID Number: " + to_string(getItemNumber()) + " Quantity: " + to_string(getQuantity()) + " Cost: " + to_string(costRounded);
}

/* END DEFINTION */

int main()
{
	int id, quantity;
	double cost;

	do
	{
		cout << "Enter Item ID:" << endl;
		cin >> id;
	} while (id < 0);

	do
	{
		cout << "Enter Quantity:" << endl;
		cin >> quantity;

	} while (quantity < 0);
	
	do
	{
		cout << "Enter cost per single item" << endl;
		cin >> cost;
	} while (cost < 0.0);

	Item item(id, quantity, cost);

	cout << item.toString() << endl;

	cout << showpoint << fixed << setprecision(2);
	cout << "Total Cost of Current Stock: ";
	cout << item.getTotalCost() << endl;
	
	system("pause");
    return 0;
}

double rounding(double value)
{
	value = floor(value * 100.00) / 100.00;
	return value;
}