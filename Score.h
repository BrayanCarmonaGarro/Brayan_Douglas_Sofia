#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class Score
{
private:
	const int ERROR_OPEN_FILE = 1;
public:
	int calculatePunctuation(const vector<int>&);
	void pilotsScore(vector<string>&, vector<int>&, string);
	void evaluatePositions(int&, std::string&, int&, std::vector<int>&);
	void showScore(const vector<string>&, const vector<int>&);
	int getErrorOpenFile();
	void saveData(vector<string>, vector<int>);
};

