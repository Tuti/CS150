#include "stdafx.h"
#include <string>
#include <iostream>
#include "Polynomial.h"

using namespace std;

int main()
{

	Term term1 = Term(2, "x", 2, true);
	cout << term1.toString();

	cin.get();
	return 0;


}




