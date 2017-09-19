/*
	assignment3_21.cpp: 

		calculates monthly payments for a loan and prints out report of its details: 

	Algorithm:

	START OF PROGRAM 

	Ask user for for annual interest rate
	Ask user for number of payments
	Ask user for loan amount
	Calculate payment using formula provided 
	Print details of loan such as loan amount, monthly interest rate, monthly payment, etc.

	END OF PROGRAM
*/


#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;


double askUser(string message)
{
	double input;

	cout << "Enter " << message;
	cin >> input;

	return input;
}

void printReport(double loanAmount, double monthlyInterestRate, double numOfPayments)
{
	double payment, interestPaid;

	payment = ((monthlyInterestRate * pow((1 + monthlyInterestRate), numOfPayments)) / (pow((1 + monthlyInterestRate), numOfPayments) - 1)) * loanAmount;
	
	cout << setprecision(2) << fixed;
	cout << "Loan Amount:			$" << loanAmount << endl;
	cout << "Monthly Interest Rate:		" << (monthlyInterestRate * 100) << "%" << endl;
	cout << "Number of payments:		" << numOfPayments << endl;
	cout << "Monthly Payment:		$" << payment << endl;
	cout << "Amount Paid Back:		$" << (payment * numOfPayments) << endl;
	cout << "Interest Paid:			$" << (payment * numOfPayments) - loanAmount << endl;

}

int main()
{
	double annualInterestRate, monthlyInterestRate, numOfPayments, loanAmount;

	annualInterestRate = askUser("annual interest rate: ");
	monthlyInterestRate = annualInterestRate / 12.00; // 12 months == 1 year 
	numOfPayments = askUser("number of payments: ");
	loanAmount = askUser("loan amount: $");

	cout << endl;

	printReport(loanAmount, monthlyInterestRate, numOfPayments);

	cout << endl;
	system("pause");
    return 0;
}

