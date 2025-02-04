#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int _max = max({ a,b,c });
	int res = 0;
	if (_max == a) res = b + c > a ? a + b + c : (b + c) * 2 - 1;
	else if (_max == b) res = a + c > b ? a + b + c : (a + c) * 2 - 1;
	else if (_max == c) res = a + b > c ? a + b + c : (a + b) * 2 - 1;
	cout << res;
}