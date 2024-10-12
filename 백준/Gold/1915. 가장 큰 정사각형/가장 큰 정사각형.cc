#include <iostream>
#include<vector>
#include<algorithm>


using namespace std;

vector<vector<int>> D;
vector<vector<int>> S;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    D.resize(n, vector<int>(m, 0));
    S.resize(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        for (int j = 0; j < m; j++) {
            D[i][j] = tmp[j] - '0';
            if(i==0 || j==0){
                S[i][j] = D[i][j];
            }
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if(!D[i][j]){
                continue;
            }
            if(S[i-1][j-1]==S[i-1][j]&& S[i-1][j]==S[i][j-1]){
                S[i][j] = S[i-1][j-1] + 1;
            }
            else{
                S[i][j] = min({S[i - 1][j - 1], S[i - 1][j], S[i][j - 1]})+1;
            }
        }
    }

//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cout << S[i][j] << " ";
//        }
//        cout << endl;
//    }

    long long max=0;
    for(int i=0;i<n;i++){
        auto row_max = *max_element(S[i].begin(), S[i].end());
        max = max > row_max ? max : row_max;
    }
    cout << max*max << endl;
}