/*
stadium.cpp:
	Calculates generated profits from ticket seat sales and prints
	profits to console

Algorithm:

	Ask user for amount of tickets sold per class seat
	Calculate profits by multiplying amount of tickets sold * price and add total up
	Print ticket profits to console

*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

const double TICKET_A_PRICE = 15;
const double TICKET_B_PRICE = 12;
const double TICKET_C_PRICE = 9;

void askUser(string message, double* result)
{

	double input;

	cout << "Enter amount of class " << message << " tickets sold: " << endl;
	cin >> input;

	*result = input;
}

int main()
{
	double *aTickets, *bTickets, *cTickets, profits;

	aTickets = new double();
	bTickets = new double();
	cTickets = new double();

	askUser("A", aTickets);
	askUser("B", bTickets);
	askUser("C", cTickets);

	profits = (TICKET_A_PRICE * *aTickets) + (TICKET_B_PRICE * *bTickets) + (TICKET_C_PRICE * *cTickets);

	cout << setprecision(2) << fixed;
	cout << "Ticket Profits: $" << profits;
	cout << endl << endl;

	delete aTickets;
	delete bTickets;
	delete cTickets;

	system("pause");
	return 0;

}

