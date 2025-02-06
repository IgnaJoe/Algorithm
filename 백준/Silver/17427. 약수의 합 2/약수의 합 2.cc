#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += (n / i) * i;
	}
	cout << sum;
}
