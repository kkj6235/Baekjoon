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
    vector<int> S(10001,0);
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        S[tmp]++;
    }
    for(int i=0;i<S.size();i++){
        while(S[i]!=0){
            cout << i << "\n";
            S[i]--;
        }
    }
}

