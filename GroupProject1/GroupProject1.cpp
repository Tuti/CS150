/*

  Group2.cpp: 
              will calculate money spent on a variety of things such as school 
              supplies, bonds, and income amount before and after income tax
              has been applied. Ask user for input of hours and display 
              calculations to console at end of program

 @author Jose A Huerta, Pedro Suazo, Akhil Bharadhwaj, Mikhail Ottewell 
 @version 1.0
 
 Algorithm
 
  START OF PROGRAM
 
  DECL hours, income, payRate, taxRate, clothTotal,
  clothPercentage, schoolTotal, schoolPercentage, 
  savingsPercentage, currentSavings, balance
  
  CALC income = payRate * hours
  CALC incomeAfterTax = income (income * taxRate) 
  SET balance = incomeAfterTax
  
  CALC clothTotal = income* clothPercentage
  CALC balance -= clothTotal
  CALC schoolTotal = balance * schoolPercentage
  CALC balance -= schoolTotal

  CALC bonds = balance * savingsPercentage
  CALC bonds = bonds * 5
  CALC currentSavings += bonds
  
  DISPLAY all calculations to user
  
  
  END OF PROGRAM
  
                           
  

*/

#include <iostream>

using namespace std;

int main()
{
    
    int hours;
    double income, payRate, clothTotal, schoolTotal, savingsTotal, balanceTotal,
    bondsTotal, incomeAfterTax, taxTotal, parentsBonds;
    
    const double TAX_RATE = .14;
    const double CLOTH_RATE = .1;
    const double SCHOOL_RATE = .05;
    const double SAVINGS_RATE = .25;
           
    savingsTotal = 2000;
    
    cout << "How many hours worked?" << endl;
    cin >> hours;
    
    cout << "What is the pay rate?" << endl;
    cin >> payRate;
    
    income = payRate * hours;
    incomeAfterTax = income - (income * TAX_RATE);
    balanceTotal = incomeAfterTax;
    
    clothTotal = balanceTotal * CLOTH_RATE;
    balanceTotal -= clothTotal;
    
    schoolTotal = balanceTotal * SCHOOL_RATE;
    balanceTotal -= schoolTotal;
    
    bondsTotal = balanceTotal * SAVINGS_RATE;
    balanceTotal -= bondsTotal;
    parentsBonds = bondsTotal * 5;
    
    savingsTotal += bondsTotal + parentsBonds;
    
    cout.precision(5);
    cout << "Income before taxes: $" << income << endl <<
            "Income after taxes: $" << incomeAfterTax << endl <<
            "Money spent on clothing: $" << clothTotal << endl <<
            "Money spent on school supplies: $" << schoolTotal << endl <<
            "Money spent on savings bonds: $" << bondsTotal << endl <<
            "Money parents spent on your savings: $" << parentsBonds << endl <<
            "Total amount in savings account: $" << savingsTotal << endl <<
            "Remaining money left: $" << balanceTotal << endl;
    
    
    system("Pause");
    return 0;
        
}


























