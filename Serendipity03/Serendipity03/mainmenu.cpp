/* 
	MainMenu.cpp:
		prints out mainmenu screen for serendipity02 assignment
		
	Alg.: 
	
	Start 
	
	Print Cashier Module option
	Print Inventory option 
	Print Report option
	Print exit option
	
	End
	
	(Similar to other files as well, format output to console)

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

	if (choice < 1 || choice > 5)
	{
		cout << "Must be a number between 1 and 5!";
		printMainMenu();

	}

	cout << "You selected: " << choice << endl;
}

/*
int main()
{
	printMainMenu();
	system("Pause");
	
	return 0; 
	 
}
*/

