#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string str;
	int cnt = 0;
	for(int i = 0; i< n; i++){
		cin >> str;
		bool flag = true;
		for (int j = 0; j < str.length(); j++) {
			for (int k = j+1; k < str.length(); k++) {
				if (str[j] != str[k - 1] && str[j] == str[k]) {
					flag = false;
					break;
				}
			}

			if (!flag) break;
		}
		if (flag) cnt++;
	}

	cout << cnt;
}