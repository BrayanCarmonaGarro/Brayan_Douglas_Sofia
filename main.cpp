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
	try {
		score.pilotsScore(pilots, points, "pilotos_clasificaciones.txt");
	}
	catch (int exceptionId) {
		if (score.getErrorOpenFile() == 1) {
			cout << "Error opening scores file" << "\n";
			exit(EXIT_FAILURE);
		}
		cout << "\nUnknown error";
	}
	score.showScore(pilots, points);
	score.saveData(pilots, points);

}


