#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;

    cin >> str;

    sort(str.begin(), str.end(),greater<int>());

    cout << str << endl;
}

