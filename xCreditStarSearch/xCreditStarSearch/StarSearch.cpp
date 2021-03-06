/*
	StarSearch.cpp:
		calculates the average score from a group of judges

	Algorithm: 
		Create judge class
		Make neccessary instance variables for judge class
		ask user for scores for all judges 
		find smallest and lowest score of the 5 judges
		calculate average score without using highest and lowest
		print to console average score

	@author: Jose A Huerta <josehuerta115@gmail.com>
	@version: 1.0
*/

#include "stdafx.h"
#include "Judge.h"
#include <iostream>
#include <string>
#include <iomanip>

/* Global Variables*/
int const judgeAmount = 5;
Judge judgePanel[judgeAmount];

/* Prototypes */
void getJudgeData(Judge &judge);
double CalcScore(Judge judgePanel[]);
int findLowest(Judge judgePanel[]);
int findHighest(Judge judgePanel[]);

/* Functions */

int main()
{
	double score;
	std::cout << "Size: " << sizeof(judgePanel) / sizeof(Judge) << std::endl;
	
	for (int i = 0; i < sizeof(judgePanel) / sizeof(Judge); i++)
	{
		judgePanel[i] = Judge(0.0, i + 1);
		getJudgeData(judgePanel[i]);
	}
		

	std::cout << "Lowest: " << std::to_string(findLowest(judgePanel)) << std::endl;	
	std::cout << "highest: " << std::to_string(findHighest(judgePanel)) << std::endl;
	
	/*
	score = CalcScore(judgePanel);
	std::cout << "Total Score: " << std::to_string(score) << std::endl;
	*/

	std::system("pause");
    return 0;
	
}

void getJudgeData(Judge &judge)
{
	double score = 0;
	std::cout << "Input score for judge " << std::to_string(judge.GetJudgeId()) << std::endl;
	std::cin >> score;

	if (score < 0 || score > 10)
	{
		std::cout << "Enter a score between 0.0 and 10.0!" << std::endl;
		getJudgeData(judge);
	}

	judge.SetScoreGiven(score);
	
	std::cout << "Score set: " << std::to_string(judge.GetScoreGiven()) << std::endl;
}

double CalcScore(Judge judgePanel[])
{
	double score = 0;
	int lowest = findLowest(judgePanel);
	int highest = findHighest(judgePanel);

	std::cout << "Lowest: " << findLowest(judgePanel) << std::endl;
	std::cout << "highest: " << findHighest(judgePanel) << std::endl;
	std::cout << "0: " << judgePanel[0].GetScoreGiven() << std::endl;
	std::cout << "1: " << judgePanel[1].GetScoreGiven() << std::endl;
	std::cout << "2: " << judgePanel[2].GetScoreGiven() << std::endl;

	for (int i = 0; i < sizeof(judgePanel) / sizeof(Judge); i++)
	{

		if (judgePanel[i].GetScoreGiven() != judgePanel[lowest].GetScoreGiven()
			&& judgePanel[i].GetScoreGiven() != judgePanel[highest].GetScoreGiven())
		{
			std::cout << "entered if statement" << std::endl;
			std::cout << std::to_string(judgePanel[i].GetScoreGiven());
			score += judgePanel[i].GetScoreGiven();
		}
	}

	std::cout << "Score before divided: " << std::to_string(score) << std::endl;
	score = score / 3.0; 

	return score;
}

int findLowest(Judge judgePanel[])
{
	int lowest = 0;

	for (int i = 1; i < (sizeof(judgePanel) / sizeof(Judge)); i++)
	{
		std::cout << "Current Lowest : " << judgePanel[lowest].GetScoreGiven() << " Index: " << std::to_string(lowest) << std::endl;
		std::cout << "Tested Against: " << judgePanel[i].GetScoreGiven() << " Index: " << std::to_string(i) << std::endl;

		if (judgePanel[lowest].GetScoreGiven() > judgePanel[i].GetScoreGiven())
		{
			std::cout << std::to_string(i) << std::to_string(judgePanel[i].GetScoreGiven()) << std::endl;
			lowest = i;
		}
	}

	return lowest;
}

int findHighest(Judge judgePanel[])
{
	int highest = 0;

	for (int i = 1; i < sizeof(judgePanel) / sizeof(Judge); i++)
	{
		if (judgePanel[highest].GetScoreGiven() < judgePanel[i].GetScoreGiven())
		{
			highest = i;
		}
	}

	return highest;
}
