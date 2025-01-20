#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> parser = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

int main()
{
    int idx = 0;
    string str;
    cin >> str;

    for(string iter : parser){
        while (str.find(iter) != string::npos) {
            idx = str.find(iter);

            str.replace(idx, iter.length(), "#");
        }
    }
    cout << str.length();
}