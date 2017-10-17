
#include "stdafx.h"
#include "Judge.h"
#include <string>

/**** Start of Judge Class Definiton ****/

/* Constructors */
Judge::Judge()
{
	this->scoreGiven = 0.0;
	this->judgeId = 01;
}

Judge::Judge(const double scoreGiven, const int judgeId)
{
	this->scoreGiven = scoreGiven;
	this->judgeId = judgeId;
}

/* Getters */
double Judge::GetScoreGiven() const
{
	return this->scoreGiven;
}

int Judge::GetJudgeId() const
{
	return this->judgeId;
}

/* Setters */
void Judge::SetScoreGiven(const double scoreGiven)
{
	this->scoreGiven = scoreGiven;
}

void Judge::SetJudgeId(const int judgeId)
{
	this->judgeId = judgeId;
}
