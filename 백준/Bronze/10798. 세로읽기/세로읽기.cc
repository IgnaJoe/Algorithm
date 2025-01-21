#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	vector<string> input;
	for (int i = 0; i < 5; i++) {
		string str;
		getline(cin, str);
		input.push_back(str);
	}
	string output;
	while (input.size() != 0) {
		for (auto it = input.begin(); it != input.end(); it++) {
			if ((*it) == "") continue;
			output += (*it).front();
			(*it).erase(0,1);
			continue;
		}
		auto it = find(input.begin(), input.end(), "");

		if (it != input.end()) 
			input.erase(it);
	}
	cout << output;
}