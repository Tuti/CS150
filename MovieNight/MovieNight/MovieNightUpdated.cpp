/*
MovieNight.cpp:
Uses movie objects to print out the current movies and their data

Algorithm:

START

Create header file Movie.h to make movie class
Make constructors, getters, setters, and any functions needed
	Include 2 new variables productioncosts and first year revenue 
Make movienight.cpp that will include movie.h header file
Define the movie class functions
Instantiate 3 objects of movie
Make an array and add those 3 objects in to the array
Pass the array into a function that takes in movie arrays
Cout all info thru a for loop that will finish at the end of the movie array length.

END
*/


#include "stdafx.h"
#include "MovieUpdated.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

//ProtoTypes
void printMovieData(Movie movies[]);

/*** Start Definition of Movie ***/

//Constructors 
Movie::Movie()
{
	this->title = "";
	this->director = "";
	this->yearReleased = 0000;
	this->runningTime = 0000;
	this->productionCosts = 0.0;
	this->firstYearRevenue = 0.0;
}

Movie::Movie(const string title, const string director, const int yearReleased, const int runningTime, 
				const double productionCosts, const double firstYearRevenue)
{
	this->title = title;
	this->director = director;
	this->yearReleased = yearReleased;
	this->runningTime = runningTime;
	this->productionCosts = productionCosts;
	this->firstYearRevenue = firstYearRevenue;

}

//Getters 
string Movie::getTitle()
{
	return this->title;
}

string Movie::getDirector()
{
	return this->director;
}

int Movie::getYearReleased()
{
	return this->yearReleased;
}

int Movie::getRunningTime()
{
	return this->runningTime;
}

double Movie::getProductionCosts()
{
	return this->productionCosts;
}

double Movie::getFirstYearRev()
{
	return this->firstYearRevenue;
}

//Setters
void Movie::setTitle(const string title)
{
	this->title = title;
}

void Movie::setDirector(const string title)
{
	this->director = director;
}

void Movie::setYearReleased(const int yearReleased)
{
	this->yearReleased = yearReleased;
}

void Movie::setRunningTime(const int runningTime)
{
	this->runningTime = runningTime;
}

void Movie::setProducionCosts(const double productionCosts)
{
	this->productionCosts = productionCosts;
}

void Movie::setFirstYearRev(const double firstYearRev)
{
	this->firstYearRevenue = firstYearRev;
}

/*** End Defintion of Movie ***/


//Functions


int main()
{
Movie movie1("Fast and the Furious", "Some Guy", 2002, 123, 7000000.0, 112023455.0);
Movie movie2("Spiderman", "Peter Something", 2006, 124, 214214241.0, 353253532.0 );
Movie movie3("Gone Girl", "David Fincher", 2014, 149, 12124949.0, 35359432.00);

Movie movies[4] = {movie1, movie2, movie3};

printMovieData(movies);

cin.get(); //holdscreen
return 0;
}


void printMovieData(Movie movies[])
{
	int length = sizeof(movies);

	cout << "Current Movies: " << endl;
	for (int i = 0; i < length; i++)
	{
		cout << showpoint << fixed << setprecision(2);
		if (movies[i].getRunningTime() != 0 && movies[i].getYearReleased() != 0)
		{
			cout << "Title: " << movies[i].getTitle() << endl;
			cout << "Director: " << movies[i].getDirector() << endl;
			cout << "Running Time: " << movies[i].getRunningTime() << " minutes " << endl;
			cout << "Year Released: " << movies[i].getYearReleased() << endl;
			cout << "Production Costs: " << movies[i].getProductionCosts() << endl;
			cout << "First Year Revenues: " << movies[i].getFirstYearRev() << endl;
			cout << endl;
		}

	}
}


