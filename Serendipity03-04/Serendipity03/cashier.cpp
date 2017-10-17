/*
	cashier.cpp:

	Now takes in user input and calculates entire sale and it details such as tax and prices. 
	Displays results of calculations in form of a reciept to the user/customer. 

	Algorithm: 

	Take in user input for details of purchase such as book name, quantity of books bought, price, etc.
	Store those details in values
	format cout to print output in the form of a reciept


*/
#include "stdafx.h"
#include <iostream> 
#include <string>
#include <iomanip>

using namespace std;

const double TAX_RATE = .06;
string date, title, isbn;
double price;
int quantity;


void askUserForInfo()
{

	cout << "Enter date: ";
	cin >> date;
	cout << "Enter quantity of books: ";
	cin >> quantity;

	cout << "Enter book ISBN: ";
	cin >> isbn;
	cout << "Enter title of book: ";
	cin >> title;

	cout << "Enter unit price of book: ";
	cin >> price;
	cout << endl;

}

void testInput()
{
	date = "03/15/12";
	title = "History of Scotland";
	isbn = "0-333-90123-8";
	price = 19.95;
	quantity = 2;
}

void printCashierScreen()
{
	double subtotal = (quantity * price);
	double tax = (quantity * price) * TAX_RATE;
	double total = (quantity * price) + tax;

	cout << setprecision(2) << fixed;
	cout << "Date: " << date << endl;
	cout << "Qty	ISBN		Title				Price		Total" << endl;
	cout << "_____________________________________________________________________________" << endl;
	cout << quantity << "	" << isbn << "	" << title << "		" << price << "		" << (quantity * price) << endl;
	cout <<  endl << "		Subtotal:	" << subtotal << endl;
	cout << "		Tax:		" << tax << endl;
	cout << "		Total:		" << total << endl << endl;
	cout << "	Thank you for shopping Serendipity! " << endl;
	cout << endl;
	
}


/*
int main()
{

	//askUserForInfo(); this will yeild same results, but instead ask user for details instead of using the pre defined ones
	testInput();
	printCashierScreen();
	system("Pause");
	return 0;
}
*/