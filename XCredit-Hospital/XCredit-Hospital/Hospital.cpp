
/*

	Hospital.cpp:
		
		calculates the total charges for either a inpatient or an outpatient

	Algorithm: 

		START 

		Create 2 classes, one for inpatient and one for outpatient
		Each class will have the necessary instance variables, getter, setter and constructor methods 
		Ask user which type of patient will the charges be calculated for
		Depending on previous answer, will ask for name, days stayed, daily rate, etc
		Create an object of either inpatient or outpatient with the given values
		Pass the object into the calculateTotalCharges
		Print to console total amount from calculateTotalCharges

		END 

	@author: Jose A Huerta <josehuerta115@gmail.com>
	@version: 1.0

*/


#include "stdafx.h"
#include "Patient.h"
#include <string>
#include <iostream> 
#include <iomanip>

using namespace std;

/* Prototypes*/

double calculateTotalCharges(const InPatient &patient);
double calculateTotalCharges(const OutPatient &patient);
string GetInput(const char message[]);
double GetInput(const char message[], const double parameter1);

int GetUserChoice(const char message[]);
int GetInput(const char message[], const int parameter1);
double calculateTotalCharges(const InPatient &patient);
double calculateTotalCharges(const OutPatient &patient);

/* Functions */

int main()
{
	int choice;

	string name;
	int days;
	double rate;
	double serviceCharges;
	double medicationCharges;
	InPatient inpatient;
	OutPatient outpatient;

	choice = GetUserChoice("1. Calculate Inpatient Charges \n2. Calculate OutPatient Charges\n");
	
	switch (choice)
	{
		case 1:
			name = GetInput("Enter name of Patient: ");
			days = GetInput("Enter number of days in hospital: ", 1);
			rate = GetInput("Enter daily rate: ", 0.0);
			serviceCharges = GetInput("Enter service charges: ", 0.0);
			medicationCharges = GetInput("Enter medication costs: ", 0.0);
			
			inpatient = InPatient(name, days, rate, serviceCharges, medicationCharges);

			cout << fixed << showpoint << setprecision(2);
			cout << endl << "InPatient Total Charges: $" << calculateTotalCharges(inpatient) << endl;
			break;
		
		case 2: 
			name = GetInput("Enter name of Patient: ");
			serviceCharges = GetInput("Enter service charges: ", 0.0);
			medicationCharges = GetInput("Enter medication costs: ", 0.0);
			
			outpatient = OutPatient(name, serviceCharges, medicationCharges);
			
			cout << fixed << showpoint << setprecision(2);
			cout << endl << "OutPatient Total Charges: $" << calculateTotalCharges(outpatient) << endl;
			break;

		default:
			cout << "should not have his this case..." << endl;
			break;
	}
	
	system("pause");
	return 0;
}

int GetUserChoice(const char message[])
{
	int choice;

	cout << message << endl;
	cin >> choice;

	if (choice < 1 || choice > 2)
	{
		cout << "Enter a valid input!" << endl;
		GetUserChoice(message);
	}

	return choice;
}

string GetInput(const char message[])
{
	cin.ignore(); // to clear trailing \n char

	char target[100];
	cout << message << endl;
	cin.getline(target, sizeof(target));

	return string(target);
}

double GetInput(const char message[], const double parameter1)
{
	double target;

	cout << message << endl;
	cin >> target;

	if (target < parameter1)
	{
		cout << "Enter a valid input!" << endl;
		GetInput(message, parameter1);
	}

	return target;
}

int GetInput(const char message[], const int parameter1)
{
	int target;

	cout << message << endl;
	cin >> target;

	if (target < parameter1)
	{
		cout << "Enter a valid input!" << endl;
		GetInput(message, parameter1);
	}

	return target;
}

double calculateTotalCharges(const InPatient &patient)
{
	double total;

	total = (patient.GetDailyRate() * patient.GetDaysInHospital()) + patient.GetServiceCharges() + patient.GetMedicationCharges();

	return total;
}

double calculateTotalCharges(const OutPatient &patient)
{
	double total;

	total = patient.GetServiceCharges() + patient.GetMedicationCharges();

	return total;
}


