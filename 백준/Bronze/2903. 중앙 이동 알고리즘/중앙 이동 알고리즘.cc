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
	int result = 2;
	for (int i = 0; i < n; i++) {
		result += pow(2, i);
	}
	cout << int(pow(result,2));
}
