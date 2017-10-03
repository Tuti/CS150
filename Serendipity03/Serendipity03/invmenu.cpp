#include "stdafx.h"
#include <iostream> 

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
		cout << "Must be a number between 1 and 5!";
		printInventoryMenu();
		
	}

	cout << "You selected: " << choice << endl;

	
}

/*

int main()
{
	printInventoryMenu();
	system("pause");
	return 0; 
}
*/
