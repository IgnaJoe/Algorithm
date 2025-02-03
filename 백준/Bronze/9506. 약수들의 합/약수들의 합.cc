#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	while (1) {
		vector<int> v;
		int n = 0;
		cin >> n;
		if (n == -1) break;
		for (int i = 1; i < n; i++) {
			if (n % i == 0) v.push_back(i);
		}
		string result = to_string(n);
		if (accumulate(v.begin(), v.end(), 0) == n) {
			result += " = ";
			for (auto it : v) {
				result += to_string(it);
				if (it != v.back()) result += " + ";
			}
		}
		else result = to_string(n) + " is NOT perfect.";
		cout << result << "\n";
	}
}
