#pragma once
#include <string>
#include "stdafx.h"
#include "Snack.h"


using namespace std;
class Dispenser
{
	/* Declarations */
	
	string dispenserName;
	int itemCount;
	bool isEmpty;
	Snack snack;

	
	/* Constructors */
public:
	Dispenser();
	Dispenser(string dispenserName, const bool isEmpty, const Snack snack);
	Dispenser(string dispenserName, const int itemCount, const bool isEmpty, const Snack snack);


	/* Destructors */
	~Dispenser();

	/* Getters */
	string getDispenserName();
	int getItemCount();
	bool getIsEmpty();
	Snack getSnack();

	/* Setters*/
	void setDispenserName(const string dispenserName);
	void setItemCount(const int itemCount);
	void setIsEmpty(const bool isEmpty);
	void setSnack(const Snack snack);

	/* Functions */
	Snack dispenseItem();
	void decrementItemCount();
	void incrementItemCount();


};