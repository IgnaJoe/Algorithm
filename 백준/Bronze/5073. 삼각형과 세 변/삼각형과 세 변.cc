#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	while (1) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;

		if((a == b) & (a == c)) cout << "Equilateral"<<"\n";
		else {
			int maximum = max({ a, b, c });
			if (a == b) {
				if ((a == maximum || b == maximum) || a + b > maximum) cout << "Isosceles" << "\n";
				else cout << "Invalid" << "\n";
			}
			else if(a == c) {
				if ((a == maximum || c == maximum) || a + c > maximum) cout << "Isosceles" << "\n";
				else cout << "Invalid" << "\n";
			}
			else if(b == c) {
				if ((c == maximum || b == maximum) || c + b > maximum) cout << "Isosceles" << "\n";
				else cout << "Invalid" << "\n";
			}
			else {
				string str = "";
				if (a == maximum) str = maximum >= b + c ? "Invalid" : "Scalene";
				else if (b == maximum) str = maximum >= a + c ? "Invalid" : "Scalene";
				else if (c == maximum) str = maximum >= a + b ? "Invalid" : "Scalene";
				cout << str << "\n";
			}
		}
	}
}