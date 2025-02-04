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
	int m, n;
	cin >> m >> n;
	int cnt = n - m + 1;
	int min = 10000;
	int sum = 0;
	for (int i = m; i <= n; i++) {
		if (i == 1) {
			cnt--;
			continue;
		}
		bool isPrime = true;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				cnt--;
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			if(i < min) min = i;
			sum += i;
		}
	}
	if (sum == 0) cout << -1;
	else cout << sum << "\n" << min;
}
