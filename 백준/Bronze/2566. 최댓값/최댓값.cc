#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main()
{
	int arr[9][9]{};
	int max = 0;
	pair<int, int> idx;
	map<int, int> m;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] > max) {
				max = arr[i][j];
				idx.first = i;
				idx.second = j;
			}
		}
	}

	cout << max << "\n" << idx.first+1 << " " << idx.second+1;
}