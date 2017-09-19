/*
MovieTheaterProfits.cpp:

Calculates net profit per movie shown at a movie theater determining amount towards
the theater and the movie distributor

Algorithm:

Ask user for amount of adult tickets sold
Ask user for amount of child tickets sold
Calculate price * adult tickets
Caculate price * child tickets
Add together both adult tickets and child tickets
Print to console profits to theater and distributor 

*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

const double TICKETS_ADULT_PRICE = 10;
const double TICKETS_CHILD_PRICE = 6;
const double THEATER_RATE = .8;
const double DISTRIBUTOR_RATE = .2;

int ticketsSold(string message)
{
	int input;

	cout << "Enter amount of " << message << " tickets sold: ";
	cin >> input;

	return input;
}

string askMovieName()
{
	string movie;

	cout << "Enter name of movie: ";

	char input[100];
	cin.getline(input, sizeof(input));

	return string(input);
}

void printReport(string movie, int adultTickets, int childTickets)
{
	double totalProfit, theaterProfit, distributorProfit;

	totalProfit = (adultTickets * TICKETS_ADULT_PRICE) + (childTickets * TICKETS_CHILD_PRICE);
	theaterProfit = totalProfit * THEATER_RATE;
	distributorProfit = totalProfit * DISTRIBUTOR_RATE;

	cout << "Movie Name:		" << movie << endl;
	cout << "Adult Tickets Sold:			" << adultTickets << endl;
	cout << "Child Tickets Sold:			" << childTickets << endl;
	cout << "Gross Box Office Revenue:		$" << totalProfit << endl;
	cout << "Amount Paid to Distributor:		-$" << distributorProfit << endl;
	cout << "Net Box Office Revenue:			$" << theaterProfit << endl;

	printf("Movie Name: %s\n", movie.c_str());
}

int main()
{

	string movie;
	int adultTickets, childTickets;

	movie = askMovieName();
	adultTickets = ticketsSold("adult");
	childTickets = ticketsSold("child");

	cout << endl;
	printReport(movie, adultTickets, childTickets);
	cout << endl;
	system("pause");
	return 0;

}