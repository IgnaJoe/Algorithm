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
	int n;
	cin >> n;
	if (n == 1) return 0;
	else {
		int tmp = 2;
		while (n >= tmp) {
			if (n % tmp == 0) {
				cout << tmp << "\n";
				n /= tmp;
			}
			else tmp++;
		}
	}
}
