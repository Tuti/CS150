#include <iostream> 

using namespace std;

void printCashierScreen()
{
	cout << "Date: " << endl << endl;
	cout << "Qty	ISBN 	Title			Price 	Total" << endl;
	cout << "____________________________________________________" << endl << endl << endl;
	cout << "		Subtotal: " << endl;
	cout << "		Tax:" << endl;
	cout << "		Total: " << endl << endl;
	cout << "	Thank you for shopping Serendipity! " << endl;
	cout << endl;
	
}

int main()
{
	printCashierScreen();
	system("Pause");
	return 0;
}