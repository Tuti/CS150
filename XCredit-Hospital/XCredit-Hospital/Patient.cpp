/*
	Patient.cpp:
		Defines both type of patients: InPatient, OutPatient


	@author: Jose A Huerta <josehuerta115@gmial.com>
	@version: 1.0

*/

#include "stdafx.h"
#include "Patient.h"
#include <string>

using namespace std;

/**** Start Of InPatient Defintion ****/

InPatient::InPatient() 
{
	//default constructor
	daysInHospital = 0;
	dailyRate = 0.0;
	serviceCharges = 0.0;
	medicationCharges = 0.0;

}

InPatient::InPatient(const string name, const int daysInHospital, const double dailyRate, const double serviceCharges, const double medicationCharges)
{
	//is this the best way to do this, convention wise? (using this pointer) @June

	this->name = name;
	this->daysInHospital = daysInHospital;
	this->dailyRate = dailyRate;
	this->serviceCharges = serviceCharges;
	this->medicationCharges = medicationCharges;

}

/* Getters */
string InPatient::GetName() const
{
	return this->name;
}

int InPatient::GetDaysInHospital() const
{
	return this->daysInHospital;
}

double InPatient::GetDailyRate() const
{
	return this->dailyRate;
}

double InPatient::GetServiceCharges() const
{
	return this->serviceCharges;
}

double InPatient::GetMedicationCharges() const
{
	return this->medicationCharges;
}


/* Setters */

void InPatient::SetName(const string name)
{
	this->name = name;
}
void InPatient::SetDaysInHospital(const int daysInHospital)
{
	this->daysInHospital = daysInHospital;
}

void InPatient::SetDailyRate(const double dailyRate)
{
	this->dailyRate = dailyRate;
}

void InPatient::SetServiceCharges(const double serviceCharges)
{
	this->serviceCharges = serviceCharges;
}

void InPatient::SetMedicationCharges(const double medicationCharges)
{
	this->medicationCharges = medicationCharges;
}

/**** End Of InPatient Defintion ****/


/**** Start of OutPatient Definition ****/

OutPatient::OutPatient()
{
	//default constructor
	
	serviceCharges = 0.0;
	medicationCharges = 0.0;


}

OutPatient::OutPatient(const string name, const double serviceCharges, const double medicationCharges)
{
	//is this the best way to do this, convention wise? (using this pointer) @June


	this->name = name;
	this->serviceCharges = serviceCharges;
	this->medicationCharges = medicationCharges;

}

/* Getters */

string OutPatient::GetName() const
{
	return this->name;
}

double OutPatient::GetServiceCharges() const
{
	return this->serviceCharges;
}

double OutPatient::GetMedicationCharges() const
{
	return this->medicationCharges;
}


/* Setters */

void OutPatient::SetName(const string name)
{
	this->name = name;
}

void OutPatient::SetServiceCharges(const double serviceCharges)
{
	this->serviceCharges = serviceCharges;
}

void OutPatient::SetMedicationCharges(const double medicationCharges)
{
	this->medicationCharges = medicationCharges;
}

/**** End Of OutPatient Definiton ****/


