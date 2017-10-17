/* 
	reports.cpp:
		prints out mainmenu screen for serendipity02 assignment
		
	Alg.: 
	
	Start 
	
	
	Print Inventory Wholesale Value 
	Print Inventory Retail Value
	Print Listing by Quantity
	Print Listing by Cost 
	Print Listing by Age
	Print Return to the main menu
	
	Check user input if valid
	Use switch case to continue onto another branch of code for future use
	
	End
	
	(Similar to other files as well, format output to console and check input)

	@author Jose A Huerta <josehuerta115@gmail.com>
	@version 1.0
*/
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
	cout << "\nEnter your choice: ";
	cin >> choice;
	cout << endl;

	if (choice < 1 || choice > 7)
	{
		cout << "Must be a number between 1 and 5!" << endl;
		printReportMenu();
	}

	switch (choice)
	{
	case 1:
		cout << "You selected: " << 1 << endl;
		break;
	case 2:
		cout << "You selected: " << 2 << endl;
		break;
	case 3:
		cout << "You selected: " << 3 << endl;
		break;
	case 4:
		cout << "You selected: " << 4 << endl;
		break;
	case 5:
		cout << "You selected: " << 5 << endl;
		break;
	case 6:
		cout << "You selected: " << 6 << endl;
		break;
	case 7:
		cout << "You selected: " << 7 << endl;
		break;


	}

}


int main()
{
	printReportMenu();
	system("pause");
	return 0;
}

