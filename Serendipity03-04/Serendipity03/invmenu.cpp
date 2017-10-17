/* 
	invmenu.cpp:
		prints out mainmenu screen for serendipity02 assignment
		
	Alg.: 
	
	Start 
	
	Print Look up book
	Print Add a Book
	Print Edit a Book's Record
	Print Delete a Book
	Print Return to the Main Menu
	
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

void printInventoryMenu()
{
	int choice;

	cout << "1. Look Up Book" <<endl;
	cout << "2. Add a Book" << endl;
	cout << "3. Edit a Book's Record " <<endl;
	cout << "4. Delete a Book " << endl;
	cout << "5. Return to the Main Menu" << endl << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	cout << endl;

	if (choice < 1 || choice > 5)
	{
		cout << "Must be a number between 1 and 5!" << endl;
		printInventoryMenu();
		
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
	}

	
}


/*
int main()
{
	printInventoryMenu();
	system("pause");
	return 0; 
}

*/

