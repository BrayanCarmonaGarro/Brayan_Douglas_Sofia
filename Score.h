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
	void pilotsScore(vector<string>&, vector<int>&, string);
	void evaluatePositions(int& pos, std::string& s_puestos, int& position, std::vector<int>& positions);
	void showScore(const vector<string>&, const vector<int>&);
};

