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
	int tmp = 1;
	int cnt = 1;
	int add = 6;
	cin >> n;
	
	while (1) {
		if (n <= tmp) break;
		tmp += add;
		add += 6;
		cnt++;
	}
	cout << cnt;
}
