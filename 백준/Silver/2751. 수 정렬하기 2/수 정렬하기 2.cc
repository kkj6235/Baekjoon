#include <iostream>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;
    vector<int> S(n);
    for(int i=0;i<n;i++){
        cin >> S[i];
    }
    sort(S.begin(), S.end());
    for(int i=0;i<n;i++){
        cout << S[i] << "\n";
    }
}

