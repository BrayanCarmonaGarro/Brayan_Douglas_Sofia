#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class Score
{
private:

public:
	int calculatePunctuation(const vector<int>&);
	void score(vector<string>&, vector<int>&, string);
	void showScore(const vector<string>&, const vector<int>&);
};

