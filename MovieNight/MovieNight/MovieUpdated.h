#pragma once
#include "stdafx.h"
#include <string>

using namespace std;

class Movie
{
	//Data Declarations
	string title;
	string director;
	int yearReleased;
	int runningTime;
	double productionCosts;
	double firstYearRevenue;

public:
	//Constructors 
	Movie();
	Movie(const string title, const string director, const int yearReleased, const int runningTime, 
			const double productionCosts, const double firstYearRevenue);

	//Getters
	string getTitle();
	string getDirector();
	int getYearReleased();
	int getRunningTime();
	double getProductionCosts();
	double getFirstYearRev();
	
	//Setters
	void setTitle(const string title);
	void setDirector(const string director);
	void setYearReleased(const int yearReleased);
	void setRunningTime(const int runningTime);
	void setProducionCosts(const double productionCosts);
	void setFirstYearRev(const double firstYearRevenue);

	//Functions
};
