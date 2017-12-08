#include "stdafx.h"
#include <string>
#include <iostream>
#include "Polynomial.h"

using namespace std;

int main()
{

	Term term1 = Term(2, "x", 2, true);
	Term term2 = Term(3, "y", 2, true);
	Term term3 = Term(4, "z", 4, false);
	vector<Term> termlist = vector<Term>();

	termlist.push_back(term1);
	termlist.push_back(term2);
	termlist.push_back(term3);

	Polynomial poly = Polynomial(termlist);

	cout << poly.toString();





	
	



	cin.get();
	return 0;


}




