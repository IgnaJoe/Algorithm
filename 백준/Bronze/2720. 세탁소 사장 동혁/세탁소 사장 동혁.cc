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
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int change;
		cin >> change;
		int quarter = change / 25;
		change %= 25;
		int dime = change / 10;
		change %= 10;
		int nickel = change / 5;
		int penny = change % 5;

		cout << quarter << " " << dime << " " << nickel << " " << penny << "\n";
	}
}
