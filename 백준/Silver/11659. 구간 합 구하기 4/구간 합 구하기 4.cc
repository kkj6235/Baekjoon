#include <iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;

    cin>>n>>m;
    int S[100001]={0};
    for(int i=1;i<=n;i++){
        int tmp;
        cin>>tmp;
        S[i]=S[i-1]+tmp;
    }

    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        cout << S[b] - S[a - 1] << "\n";
    }
    return 0;
}
