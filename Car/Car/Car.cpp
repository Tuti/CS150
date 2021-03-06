
/*
	Car.cpp: 

	Problem: 
		Create a car class that will hold the attributes for a vehicle such as
			year, make, speed, nickname, etc and show that it works

	Algorithm:

		START

	Create a car class that will hold the attributes for a vehicle such as 
		year, make, speed, nickname, etc. 
	Will need a header file that declares all constructors, variables, and methods such as
		getters, setters, and methods that do things with the object data
	Define what car class does 
		Constructor should set values of a object to the ones passed into it
		Getters will return the values of the variable that they are made for
		Setters will allow for the value of a variable to be changed to the value passed into the function
		Define Brake() to decrement currentSpeed by 5 miles 
		Define Accerelrate() to increment currentSpeed by 5 miles
		Test Car objects 
		Create a car object and call the brake function 5 times and print to console after each call

		END 
*/

#include "stdafx.h"
#include "Car.h"
#include <string>
#include <iostream>

/*** Start Of Car Class Defintion ***/
Car::Car()
{
	//default
	this->year = 0;
	this->currentSpeed = 0;
	this->engineCylinders = 0;
	this->modelMake = "";
	this->nickName = "";
}

Car::Car(const int year, const int currentSpeed, const int engineCylinders, const string modelMake, const string nickName)
{
	//main 
	this->year = year;
	this->currentSpeed = currentSpeed;
	this->engineCylinders = engineCylinders;
	this->modelMake = modelMake;
	this->nickName = nickName;
}

/* Getters */
int Car::getYear()
{
	return this->year;
}

int Car::getCurrentSpeed()
{
	return this->currentSpeed;
}

int Car::getEngineCylinders()
{
	return this->engineCylinders;
}

string Car::getModelMake()
{
	return this->modelMake;
}

string Car::getNickName()
{
	return this->nickName;
}

/* Setters */


void Car::setYear(const int year)
{
	this->year = year;
}

void Car::setCurrentSpeed(const int currentSpeed)
{
	this->currentSpeed = currentSpeed;
}

void Car::setEngineCylinders(const int engineCylinders)
{
	this->engineCylinders = engineCylinders;
}

void Car::setModelMake(const string modelMake)
{
	this->modelMake = modelMake;
}

void Car::setNickName(const string nickName)
{
	this->nickName = nickName;
}

/*** Methods ***/

void Car::Brake()
{
	currentSpeed -= 5;
}

void Car::Accelerate()
{
	currentSpeed += 5;
}

/*** End Of Car Class Defintion ***/


int main()
{
	Car greycar(2016, 65, 6, "Tacoma", "Selena");

	cout << "Original Speed: " << greycar.getCurrentSpeed() << endl << endl;


	for (int i = 0; i < 5; i++)
	{
		greycar.Accelerate();
		cout << "Current Speed: " << greycar.getCurrentSpeed() << endl;
	}

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		greycar.Brake();
		cout << "Current Speed: " << greycar.getCurrentSpeed() << endl;
	}

	cout << "\nShould be back to original speed: " << greycar.getCurrentSpeed() << endl; 
	
	system("pause");
	return 0;

}

