#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int min = *min_element(v.begin(), v.end());
	int max = *max_element(v.begin(), v.end());

	cout << min * max;
}