#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string n;
	long long b;
	cin >> n >> b;
	long long result = 0;
	reverse(n.begin(), n.end());
	
	for (int i = 0; i < n.length(); i++) {
		int val = alpha.find(n[i]) == string::npos ? n[i] - '0' : alpha.find(n[i]) + 10;

		result += val * pow(b, i);
	}

	cout << result;
}
