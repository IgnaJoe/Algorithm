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
	int n;
	int b;
	cin >> n >> b;
	string result;
	while (n != 0) {
		int remain = n % b;
		result += remain < 10 ? remain + '0' : alpha[remain - 10];
		n /= b;
	}

	reverse(result.begin(), result.end());
	cout << result;
}
