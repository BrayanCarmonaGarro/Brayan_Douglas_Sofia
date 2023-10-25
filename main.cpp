#include <fstream>  
#include <iostream>
#include <vector>
#include <string>
#include "Score.h"

using namespace std;

int main()
{
	vector<string> pilots;
	vector<int> points;
	Score score;
	score.score(pilots, points, "pilotos_clasificaciones.txt");
	score.showScore(pilots, points);
}