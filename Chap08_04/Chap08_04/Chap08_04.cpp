

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{

	string salsaNames[] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
	int salsaSold[5];
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter amount of " << salsaNames[i] << " salsas sold: " << endl;
		
		cin >> salsaSold[i];
		while (salsaSold[i] < 0)
		{
			cout << "Enter a valid number!" << endl;
			cin >> salsaSold[i];
		}
	}

	for (int i = 0; i < 5; i++)
	{






	}


	return 0;

}

