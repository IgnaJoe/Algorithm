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
	int n, m;
	cin >> n >>  m;
	vector<int> v;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) v.push_back(i);
	}

	if (m > v.size()) cout << 0;
	else cout << v[m-1];
}