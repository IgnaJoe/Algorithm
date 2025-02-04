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
	int x, y, w, h;
	int minimum = 0;
	cin >> x >> y >> w >> h;

	int xMin = w - x < x ? w - x : x;
	int yMin = h - y < y ? h - y : y;
	cout << min(xMin, yMin);
}
