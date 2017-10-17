
/*
	driver.cpp: 

		tests out dog class (first class I have made in cpp)


*/

#include "stdafx.h"
#include "dog.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	

	dog spike("Spike", "German Shepared", 6, 100);

	cout << "Dog name: " + spike.getName() << endl;
	cout << "Breed: " + spike.getBreed() << endl;

	system("pause");
	return 0;

}

