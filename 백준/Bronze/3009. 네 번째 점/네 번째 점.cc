#include <iostream>

using namespace std;

struct pos {
	int x;
	int y;
};
int main()
{
	pos list[3];
	int xArr[1001] = {0,};
	int yArr[1001] = {0,};
	for (int i = 0; i < 3; i++) {
		cin >> list[i].x >> list[i].y;

		xArr[list[i].x]++;
		yArr[list[i].y]++;
	}
	int x = 0, y = 0;
	for (int i = 0; i < 3; i++) {
		if (xArr[list[i].x] < 2) {
			x = list[i].x;
		}
		if (yArr[list[i].y] < 2) {
			y = list[i].y;
		}
	}

	cout << x << " " << y;
}
