#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int minX = 0;
	int minY = 0;
	int maxX = 0;
	int maxY = 0;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (i == 0) {
			minX = maxX = x;
			minY = maxY = y;
		}
		else {
			if (x < minX) minX = x;
			else if (x > maxX) maxX = x;
			if (y < minY) minY = y;
			else if (y > maxY) maxY = y;
		}
	}

	if (n == 1) cout << 0;
	else {
		cout << (maxX - minX) * (maxY - minY);
	}
}
