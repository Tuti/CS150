// JackOLantern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;

//Prototypes

void displayMenu();
int getChoice();
void makeJackOLantern();

//global constants

const int QUIT = 6, MAX_CHOICE = 6;

int main()
{
	int colorchoice;

	//get the handle to standard output devince (the console)

	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	
	do
	{
		SetConsoleTextAttribute(screen, 7);
		displayMenu();

		colorchoice = getChoice();

		if (colorchoice != QUIT)
		{
			SetConsoleTextAttribute(screen, colorchoice + 9);
			makeJackOLantern();
		}
	}
		
	while (colorchoice != QUIT);
	return 0;
}

void displayMenu()
{
	system("cls");
	cout << "Draw Jack O Lantern. What Color should it be? \n\n"
		<< "Enter\n1 for Green	2 for Blue	3 for Red\n"
		<< "4 for Purple	5 for Yellow	6 to quit\n";
}

int getChoice()
{
	int choice;

	cin >> choice;

	while (choice < 1 || choice > MAX_CHOICE)
	{
		cout << "\nThe only valid choices are 1-" << MAX_CHOICE
			<< ". Please re-enter. ";
		cin >> choice;
	}
	
	return choice;
}

void makeJackOLantern()
{
	cout << "\n\n";
	cout << "			^   ^\n";
	cout << "			  *\n";
	cout << "			\\___/";
	cout << "\n\nPress enter to return to the menu.";
	cin.get();
	cin.get();
}