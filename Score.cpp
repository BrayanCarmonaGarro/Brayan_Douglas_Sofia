#include "Score.h"

int Score::calculatePunctuation(const vector<int>& positions)
{
	const vector<int> points{ 10,8,6,5,4,3,2,1 };

	int addition = 0;
	for (auto position : positions) {
		if (position > 0 && position < points.size() + 1) {
			addition += points[position - 1];
		}
	}
	return addition;
}


void Score::pilotsScore(vector<string>& pilots, vector<int>& points, string fileName)
{
	ifstream fich(fileName);
	if (!fich.is_open())
	{
		throw ERROR_OPEN_FILE;
	}

	string n_carreras;
	getline(fich, n_carreras);
	int racesNumber = atoi(n_carreras.c_str());
	string pilotsQuantity;
	getline(fich, pilotsQuantity);
	int num_pilotos = atoi(pilotsQuantity.c_str());

	pilots.clear();
	points.clear();

	for (int i = 0; i < num_pilotos; i++)
	{
		string pilot;
		getline(fich, pilot);
		pilots.push_back(pilot);
		vector<int> positions;

		int position;
		string s_puestos;
		getline(fich, s_puestos);
		for (int j = 0; j < racesNumber; j++)
		{
			int pos = 0;
			evaluatePositions(pos, s_puestos, position, positions);
		}
		points.push_back(calculatePunctuation(positions));
	}
	fich.close();
}

void Score::evaluatePositions(int& pos, std::string& s_puestos, int& position, std::vector<int>& positions)
{
	while (pos = s_puestos.find(";") != string::npos) {
		if (pos != string::npos) {
			position = atoi(s_puestos.substr(0, pos).c_str());
			s_puestos.erase(0, pos + 1);
			positions.push_back(position);
		}
	}
}

void Score::showScore(const vector<string>& pilots, const vector<int>& points)
{
	cout << "\nThe actual score is:\n\n";
	for (int i = 0; i < pilots.size(); i++) {
		cout << pilots[i] << ":" << points[i] << endl;
	}
	cout << endl << endl;
}

int Score::getErrorOpenFile()
{
	return ERROR_OPEN_FILE;
}
