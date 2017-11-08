
#pragma once
#include "stdafx.h"
#include <string>

using namespace std;

class Car
{
	/* Declarations */

	int year;
	int currentSpeed;
	int engineCylinders;
	string modelMake;
	string nickName;

	
public:
	/* Constructors */
	Car();
	Car(const int year, const int currentSpeed, const int engineCylinders, string modelMake, string nickName);

	/* Getters */
	int getYear();
	int getCurrentSpeed();
	int getEngineCylinders();
	string getModelMake();
	string getNickName();

	/* Setters */

	void setYear(const int year);
	void setCurrentSpeed(const int speed);
	void setEngineCylinders(const int engineCylinders);
	void setModelMake(const string modelMake);
	void setNickName(const string nickName);

	/* Methods */

	void Brake();
	void Accelerate();

};