
#include "Dispenser.h"
#include <string>

 static const int  DEFAULT_ITEM_COUNT = 10;
/*** Start Defintion of Dispenser ***/
Dispenser::Dispenser()
{
	this->dispenserName = "";
	this->itemCount = 0;
	this->isEmpty = true;
	this->snack = Snack();

}

Dispenser::Dispenser(const string dispenserName, bool isEmpty, Snack snack)
{
	this->dispenserName = dispenserName;
	this->itemCount = DEFAULT_ITEM_COUNT;
	this->isEmpty = isEmpty;
	this->snack = snack;
}

Dispenser::Dispenser(const string dispenserName, int itemCount, bool isEmpty, Snack snack )
{
	this->dispenserName = dispenserName;
	this->itemCount = itemCount;
	this->isEmpty = isEmpty;
	this->snack = snack;
}

/* Getters */
string Dispenser::getDispenserName()
{
	return this->dispenserName;
}

int Dispenser::getItemCount()
{
	return this->itemCount;
}

bool Dispenser::getIsEmpty()
{
	return this->isEmpty;
}

Snack Dispenser::getSnack()
{
	return this->snack;
}

/* Settters */

void Dispenser::setDispenserName(const string name)
{
	this->dispenserName = name;
}

void Dispenser::setItemCount(const int count) 
{
	this->itemCount = count;
}

void Dispenser::setIsEmpty(const bool isEmpty)
{
	this->isEmpty = isEmpty;
}

void Dispenser::setSnack(const Snack snack)
{
	this->snack = snack;
}

