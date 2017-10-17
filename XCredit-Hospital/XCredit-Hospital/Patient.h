/*
	Patient.h:
		Header file for classes: InPatient, OutPatient

	@author: Jose A Huerta <josehuerta115@gmial.com>
	@version: 1.0

*/


#pragma once
#include <string>

using namespace std;

class InPatient
{
	/* Declarations */
	string name;
	int daysInHospital;
	double dailyRate;
	double serviceCharges;
	double medicationCharges;

//Public Declarations
public: 
	
	//Constructors
	InPatient();
	InPatient(const string name, const int daysInHospital, const double dailyRate, const double serviceCharges, const double medicationCharges);

	//Getters 
	string GetName() const;
	int GetDaysInHospital() const;
	double GetDailyRate() const;
	double GetServiceCharges() const;
	double GetMedicationCharges() const;

	//Setters 
	void SetName(const string name);
	void SetDaysInHospital(const int daysInHospital);
	void SetDailyRate(const double dailyRate);
	void SetServiceCharges(const double serviceCharges);
	void SetMedicationCharges(const double medicationCharges);

};

class OutPatient 
{
	/* Declarations */
	

	string name;
	double serviceCharges;
	double medicationCharges;

//Public Declarations
public:

	//Constructors
	OutPatient();
	OutPatient(const string name, const double serviceCharges, const double medicationCharges);

	//Getters 
	string GetName() const;
	double GetServiceCharges() const;
	double GetMedicationCharges() const;

	//Setters 
	void SetName(const string name);
	void SetServiceCharges(const double serviceCharges);
	void SetMedicationCharges(const double medicationCharges);

};