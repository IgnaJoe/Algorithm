#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	int arr[100][100]{};
	int n, result = 0;
	cin >> n;
	
	while (n--) {
		int x, y;
		cin >> x >> y;
		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++) {
				if (arr[i][j] == 0) {
					result++;
					arr[i][j] = 1;
				}
			}
		}
	}

	cout << result;
}
