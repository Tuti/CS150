#include <iostream> 

using namespace std;

void printInventoryMenu()
{
	cout << "1. Look Up Book" <<endl;
	cout << "2. Add a Book" << endl;
	cout << "3. Edit a Book's Record " <<endl;
	cout << "4. Delete a Book " << endl;
	cout << "5. Return to the Main Menu" << endl << endl;
	
	cout << "Enter your choice: " << endl << endl;  
	
	
}

int main()
{
	printInventoryMenu();
	system("pause");
	return 0; 
}