/* 
	mainmenu.cpp:
		prints out mainmenu screen for serendipity02 assignment
		
	Alg.: 
	
	Start 
	
	Print Cashier Module option
	Print Inventory option 
	Print Report option
	Print exit option
	
	Check user input if valid
	Use switch case to continue onto another branch of code for future use
	
	End
	
(Similar to other files as well, format output to console and check input)
	@author Jose A Huerta <josehuerta115@gmail.com>
	@version 1.0
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

void printMainMenu()
{
	int choice;
	cout << "1. Cashier Module " << endl;
	cout << "2. Inventory Database Module" << endl;
	cout << "3. Report Module " << endl;
	cout << "4. Exit " << endl << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	cout << endl;

	if (choice < 1 || choice > 4)
	{
		cout << "Must be a number between 1 and 4!" << endl;
		printMainMenu();

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
	
	}


}

/*
int main()
{
	printMainMenu();
	system("Pause");
	
	return 0; 
	 
}

*/


