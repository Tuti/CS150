/*
	sales.cpp:
	
	Calculate the total income of a business including sales tax for the state and


	Algorithm: 
	
	
	START OF PROGRAM
	Ask user for month, year, and total amount collected at register of report
	Calculate county sales tax total
	Calculate state sales tax total
	Calculate total sales tax total
	Calculate Sales : S = T / 1.06 (S = product sales, T = product sales + sales tax)
 	Format ouput as a report to user
	Check results
	
	END OF PROGRAM
	
	@author Jose A Huerta, Madison Cuppett, Pedro Suazo, Chris Hurtado
	@version 1.0
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	
	const double STATE_TAX_RATE = .04;
	const double COUNTY_TAX_RATE = .02;
	const double TOTAL_TAX_RATE = .06;

	double totalCollected, sales, salesTax, countySalesTaxTotal, stateSalesTaxTotal, totalSalesTax,
		productSales;
	
	string month, year; 
	cout << "Enter the month: " << endl;
	cin >> month;
		
	cout << "Enter the year: " << endl;
	cin >> year;
	
	cout << "Enter sales amount: " << endl;
	cin >> sales;
	
	salesTax = sales * TOTAL_TAX_RATE;
	totalCollected = sales + salesTax;
	countySalesTaxTotal = sales * COUNTY_TAX_RATE;
	stateSalesTaxTotal = sales * STATE_TAX_RATE;
	totalSalesTax = countySalesTaxTotal + stateSalesTaxTotal;
	
	productSales = totalCollected / 1.06;
	
	cout << setprecision(2) << fixed;
	cout << endl << "Month: " << month << " " << year << endl;
	cout << "_____________________" << endl;
	cout << "Total Collected: " << totalCollected << endl;
	cout << "Sales: " << sales << endl;
	cout << "County Sales Tax: " << countySalesTaxTotal << endl;
	cout << "State Sales Tax: " << stateSalesTaxTotal <<endl;
	cout << "Total Sales Tax: " << totalSalesTax << endl;
	
	system("Pause");
	return 0;
}



