/*

Algorithm: 

Define vending machine class that has one register object and 4 dispenser objects
The register class would include double totalMoney, double inputAmount, double amountReturned private member variables
	In should have a register constructor that initailizes totalAmount to $50, inputAmount to $0, and amountReturned to $0 
	create accessors, mutators, constructor and destructors for the class
	dispenseChange():
	calculateChange():
	coversCost(): return boolean
the dispenser class should include string itemName, double itemcost, int itemCount, Bool isEmpty
	create accessors, mutators, constructor and destructors for the class
	dispenseItem():
	decrementItemcount():
	incrementItemCount():

*/


#include "stdafx.h"
#include "VendingMachine.h"
#include "Snack.h"
#include "Dispenser.h"
#include <string>

using namespace std;

int main
{
	Snack dorito("Doritos" , 1.00);

	return 0;
}

