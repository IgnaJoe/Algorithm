#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int digit = 1;
		int num = 1;
		while (1) {
			if (num % n == 0) break;
			digit++;
			num = num * 10 + 1;
			num %= n;
		}
		cout << digit << "\n";
	}
}