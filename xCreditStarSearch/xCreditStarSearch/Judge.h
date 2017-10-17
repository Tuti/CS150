#pragma once

class Judge
{
	/* Declarations */
	double scoreGiven;
	int judgeId;

//Public Declarations 
public:

	//Constructors 
	Judge();
	Judge(const double scoreGiven, const int judgeId );

	//Getters 
	double GetScoreGiven() const;
	int GetJudgeId() const;

	//Setters 
	void SetScoreGiven(const double scoreGiven);
	void SetJudgeId(const int judgeId);

};
