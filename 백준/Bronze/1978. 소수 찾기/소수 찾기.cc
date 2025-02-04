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
	vector<int> v;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	int cnt = n;
	for (auto it : v) {
		if (it == 1) {
			cnt--;
			continue;
		}
		for (int i = 2; i != it; i++) {
			if (it % i == 0) {
				cnt--;
				break;
			}
		}
	}
	cout << cnt;
}
