#pragma once
#include "stdafx.h"
#include <string>

using namespace std;

class dog
{
	/*** Declarations ***/
	string name;
	string breed;
	int age;
	double weight;

public: // public function declarations
	
	//Constructors
	dog(); 
	dog(string name, string breed, int age, double weight);
	
	//Getters
	string getName();
	string getBreed();
	int getAge();
	double getWeight();

	//Setters
	void setName(const string name);
	void setBreed(const string breed);
	void setAge(const int age);
	void setWeight(const double weight);
	
	//methods
	void printDogInfo();
	

};