#pragma once
#include <string>
#include "Register.h"
#include "Dispenser.h"

class VendingMachine
{
	//Declarations
	Dispenser dispenser1;
	Dispenser dispenser2;
	Dispenser dispenser3;
	Dispenser dispenser4;
	Register reg;

public:
	//Constructors
	VendingMachine();
	VendingMachine(Dispenser array[], Register reg);

	//Destructor
	~VendingMachine();

	//Getters 
	Dispenser getDispenser1();
	Dispenser getDispenser2();
	Dispenser getDispenser3();
	Dispenser getDispenser4();
	Register getRegister();

	//Setters
	void setDispenser1(const Dispenser disp);
	void setDispenser2(const Dispenser disp);
	void setDispenser3(const Dispenser disp);
	void setDispenser4(const Dispenser disp);
	void setRegiser(Register reg);


	//Functions
	void displayMenu();
	void userDecision(int choice);
	void paySnack(double input, double cost, Dispenser disp);
};