// VendingMachine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "VendingMachine.h"
#include <iostream>
#include <iomanip>

using namespace std;
/* Start Definition of VendingMachine */

//Getters 
Dispenser VendingMachine::getDispenser1()
{
	return this->dispenser1;
}

Dispenser VendingMachine::getDispenser2()
{
	return this->dispenser2;
}

Dispenser VendingMachine::getDispenser3()
{
	return this->dispenser3;
}


Dispenser VendingMachine::getDispenser4()
{
	return this->dispenser4;
}

Register VendingMachine::getRegister()
{
	return this->reg;
}

//Setters 
void VendingMachine::displayMenu()
{
	int choice;
	cout << "Vending Machine" << endl;
	cout << "1. " << getDispenser1().getSnack().getName() << " " << "Cost: " << getDispenser1().getSnack().getCost() << " Current Stock: " << getDispenser1().getItemCount() << endl;
	cout << "2. " << getDispenser2().getSnack().getName() << " " << "Cost: " << getDispenser2().getSnack().getCost() << " Current Stock: " << getDispenser2().getItemCount() << endl;
	cout << "3. " << getDispenser3().getSnack().getName() << " " << "Cost: " << getDispenser3().getSnack().getCost() << " Current Stock: " << getDispenser3().getItemCount() << endl;
	cout << "4. " << getDispenser4().getSnack().getName() << " " << "Cost: " << getDispenser4().getSnack().getCost() << " Current Stock: " << getDispenser4().getItemCount() << endl;
	cout << "5. Quit" << endl;

	cin >> choice;

	userDecision(choice);

}

void VendingMachine::userDecision(int choice)
{
	Snack snack;
	switch (choice)
	{
		case 1:
			if (getDispenser1().getItemCount() < 1)
			{
				cout << "No stock to fulfill request" << endl;
				displayMenu();
			}
			else
			{
				double input; 
				paySnack(getDispenser1().getSnack().getCost());
			}

			break;
		case 2:




	}
}

void VendingMachine::paySnack(double input, double cost, Dispenser disp)
{
	if (getRegister().isEnough(input, cost))
	{

		getRegister().addMoney(input);
		cout << "Item Dispensed" << endl;
		disp.decrementItemCount();
		if (input - cost > 0)
		{
			cout << showpoint << fixed << setprecision;
			cout << "Change due: " << input - cost << endl;
			if (getRegister().getTotalMoney() - input - cost < 0)
			{
				cout << "No sufficient funds, printing credit receipt for bookstore: " << endl;
				cout << "Credit Receipt: " << -1 * (getRegister().getTotalMoney() - input - cost);
			}
			
		}
	}
	
	else
	{
		cout << "1. Enter more money" << endl;
		cout << "2. Cancel " << endl;

		int choice;
		cin >> choice;

		if (choice == 1)
		{
			double moremoney;
			cin >> moremoney;
			paySnack(input + moremoney, cost, disp);
		}

		else
		{
			cout << "Dispensing change: " << endl;
			cout << "Change: " << input;
		}
	}
}
