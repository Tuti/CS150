#include <iostream> 

using namespace std;

void printReportMenu()
{
	cout << "1. Inventory Listing" << endl;
	cout << "2. Inventory Wholesale Value " << endl;
	cout << "3. Inventory Retail Value" << endl;
	cout << "4. Listing by Quantity" << endl;
	cout << "5. Listing by Cost" << endl;
	cout << "6. Listing by Age" << endl;
	cout << "7. Return to the main menu" << endl;
	
	cout << endl << "Enter your choice ";
}

int main()
{
	printReportMenu();
	system("pause");
	return 0;
}