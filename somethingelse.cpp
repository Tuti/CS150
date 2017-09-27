
/*
	gambling.cpp:
	
	Make a game that will simulate rolling dice and depending on the sum of the dice roll, 
	will give consqeunces whether it be losing or gaining money
	
	Algorithm: 
	
	START OF PROGRAM
	
	Ask user to roll dice
	User rolls dice
	Calculate the sum of the roll
	Check the consqeunce
	Add consqeunce to user balance
	Ask user to continue rolling until finsihed eg 5 rolls
	
	END OF PROGRAM
	
	@author: Jose Huerta, Ziqin Wang, Kai Cameron, Gonzalo Arrazola, Luis Rodriguez
	@version 1.0
	
*/


#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h> 
#include <ctime>



using namespace std;

int generateDiceRoll()
{
	int rollSum;
	
	rollSum = rand() % 6 + 1;
	return rollSum;
}

int diceRollConsequence(int rollSum)
{
	int consequence;
	switch(rollSum)
	{
		case 2: 
			consequence = 200;
			break;
		case 3: 
			consequence = 40;
			break;
		case 4: 
			consequence = -20;
			break;
		case 5:
			consequence = 20;
			break;
		case 6:
			consequence = -30;
			break;
		case 7: 
			consequence = -10;
			break;
		case 8: 
			consequence = -20;
			break;
		case 9:
			consequence = 10;
			break;
		case 10:
			consequence = -10;
			break;
		case 11:
			consequence = 30;
			break;
		case 12: 
			consequence = 100;
			break;
		default:
			consequence = 0;
			break;
	}
	return consequence;
}

int main()
{
	int diceroll1, diceroll2, something, balance, consequence;
	unsigned seed = time(0);
	srand(seed);
	
	for(int i = 0; i < 6; i++)
	{
		diceroll1 = generateDiceRoll();
		diceroll2 = generateDiceRoll();

		consequence = diceRollConsequence(diceroll1 + diceroll2);
		if(consequence < 0)
		{
			cout << "You rolled: " << diceroll1 << " and " << diceroll2 << endl;
			cout << "You have lost: $" << -1 * consequence << endl;
		}
		else
		{
			cout << "You rolled: " << diceroll1 << " and " << diceroll2 << endl;
			cout << "You have won: $" << consequence << endl;
		}
		balance += consequence;
	}
	
	
	if(balance < 0)
	{
		cout << endl << "User balance: -$" << -1 * balance << endl;
	}
	else
	{
		cout << endl << "User balance: $" << balance << endl;
	}
	 
	
	system("pause");
	return 0;
		
	
}

