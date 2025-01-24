#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int line = 1;
	
	while (n - line > 0) {
		n -= line;
		line++;
	}
	// 홀수
	if (line % 2 != 0) cout << line - n + 1 << '/' << n;
	// 짝수
	else cout << n << '/' << line - n + 1;
}