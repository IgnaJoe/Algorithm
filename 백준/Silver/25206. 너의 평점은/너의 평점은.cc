#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main()
{
	map<string, pair<float, string>> dic;
	map<string, float> subRating;
	subRating["A+"] = 4.5;
	subRating["A0"] = 4.0;
	subRating["B+"] = 3.5;
	subRating["B0"] = 3.0;
	subRating["C+"] = 2.5;
	subRating["C0"] = 2.0;
	subRating["D+"] = 1.5;
	subRating["D0"] = 1.0;
	subRating["F"] = 0.0;

	for (int i = 0; i < 20; i++) {
		string str;
		getline(cin, str);

		stringstream ss(str);
		
		string subject;
		float score = 0.0;
		string grade;
		ss >> subject >> score >> grade;

		dic[subject] = make_pair(score, grade);
	}
	float totalScore = 0.0;
	float subTotal = 0.0;
	int pCnt = 0;
	for (auto p : dic) {
		if (p.second.second != "P") 
		{
			totalScore += p.second.first;
			subTotal += p.second.first * subRating[p.second.second];
		}
		else pCnt++;
	}

	if (totalScore == 0) cout << totalScore;
	else cout << subTotal / totalScore;
}