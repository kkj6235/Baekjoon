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
    int sum = S[0],total_sum=S[0];
    for(int i=1;i<n;i++){
        sum += S[i];
        total_sum = total_sum + sum;
    }

    cout << total_sum << "\n";
}

