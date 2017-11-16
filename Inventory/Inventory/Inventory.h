#pragma once
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Item
{
	//Declarations 
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;

public:

	//Constructor
	Item();
	Item(const int itemNumber, const int quantity, const double cost);

	//Getters
	int getItemNumber();
	int getQuantity();
	double getCost();
	double getTotalCost();
	
	//Setters
	void setItemNumber(const int itemNumber);
	void setQuantity(const int quantity);
	void setCost(const double cost);
	void setTotalCost(const double totalCost);

	//Functions

	string toString();

};