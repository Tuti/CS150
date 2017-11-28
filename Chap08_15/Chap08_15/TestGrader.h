#pragma once
#include <string>

using namespace std;

class TestGrader
{
	//Data Fields
	char key[20];

public:
	//Constructors 
	TestGrader();
	TestGrader(const char key[20]);

	//Functions
	void setKey(const string key);
};