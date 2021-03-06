
#include "stdafx.h"

/*
	MovieNight.cpp:
		Uses movie objects to print out the current movies and their data

	Algorithm:

		START
		
		Create header file Movie.h to make movie class
		Make constructors, getters, setters, and any functions needed
		Make movienight.cpp that will include movie.h header file
		Define the movie class functions
		Instantiate 3 objects of movie
		Make an array and add those 3 objects in to the array
		Pass the array into a function that takes in movie arrays
		Cout all info thru a for loop that will finish at the end of the movie array length.

		END



#include "Movie.h"
#include <string>
#include <iostream>

using namespace std;

//ProtoTypes
void printMovieData(Movie movies[]);


//Constructors 
Movie::Movie()
{
	this->title = "";
	this->director = "";
	this->yearReleased = 0000;
	this->runningTime = 0000;
}

Movie::Movie(const string title, const string director, const int yearReleased, const int runningTime)
{
	this->title = title;
	this->director = director;
	this->yearReleased = yearReleased;
	this->runningTime = runningTime;
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





int main()
{
	Movie movie1("Fast and the Furious", "Some Guy", 2002, 123);
	Movie movie2("Spiderman", "Peter Something", 2006, 98);
	Movie movie3("Gone Girl", "David Fincher", 2014, 149);

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
		if (movies[i].getRunningTime() != 0 && movies[i].getYearReleased() != 0)
		{
			cout << "Title: " << movies[i].getTitle() << endl;
			cout << "Director: " << movies[i].getDirector() << endl;
			cout << "Running Time: " << movies[i].getRunningTime() << " minutes " << endl;
			cout << "Year Released: " << movies[i].getYearReleased() << endl;
			cout << endl;
		}
		
	}
}


*/