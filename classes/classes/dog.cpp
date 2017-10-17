
/* 

	dog.cpp: 

		defines dog class and all of its methods 


*/


#include "stdafx.h"
#include "dog.h"
#include <string>
#include <iostream>

using namespace std;

/*** dog class defintion ***/

/* constructors */
dog::dog()
{
	//default constructor
	name = "";
	breed = "";
	age = 0;
	weight = 0;
}

dog::dog(string name, string breed, int age, double weight)
{
	//main constructor
	this->name = name;
	this->breed = breed;
	this->age = age;
	this->weight = weight;

}

/* getters */
string dog::getName()
{
	return name;
}

string dog::getBreed()
{
	return breed;
}

int dog::getAge()
{
	return age;
}

double dog::getWeight()
{
	return weight;
}

/* setters */
void dog::setName(string name)
{
	this->name = name;
}

void dog::setBreed(string breed)
{
	this->breed = breed;
}

void dog::setAge(int age)
{
	this->age = age;
}

void dog::setWeight(double weight)
{
	this->weight = weight;
}

/* methods */

void dog::printDogInfo()
{
	cout << "Name: " << name << "Breed: " << breed << "Age: " << age 
		<< "Weight: " << weight << endl;
			
}