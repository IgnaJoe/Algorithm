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
	while (true) {
		cin >> n >>  m;
		if (n == 0 && m == 0) break;

		if (m % n == 0) cout << "factor\n";
		else if (n % m == 0) cout << "multiple\n";
		else cout << "neither\n";
	}
}
