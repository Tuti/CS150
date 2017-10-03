
#include "stdafx.h"
#include <iostream> 
#include <string>

using namespace std;

void printReportMenu()
{
	int choice;
	cout << "1. Inventory Listing" << endl;
	cout << "2. Inventory Wholesale Value " << endl;
	cout << "3. Inventory Retail Value" << endl;
	cout << "4. Listing by Quantity" << endl;
	cout << "5. Listing by Cost" << endl;
	cout << "6. Listing by Age" << endl;
	cout << "7. Return to the main menu" << endl;
	cout << "Enter your choice ";
	cin >> choice;
	cout << endl;

	if (choice < 1 || choice > 5)
	{
		cout << "Must be a number between 1 and 5!" << endl;
		printReportMenu();
	}

	cout << "You selected: " << choice << endl;
}

/*
int main()
{
	printReportMenu();
	system("pause");
	return 0;
}

*/