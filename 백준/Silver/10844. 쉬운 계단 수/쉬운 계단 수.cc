#include <iostream>
#include<vector>
#include<algorithm>


using namespace std;

vector<vector<long long>> D;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    D.resize(n+1, vector<long long>(10, 0));

    if(n>0){
        for (int j = 1; j < 10; j++) {
            D[1][j] = 1;
        }
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 0) {
                D[i][j] = D[i - 1][j + 1]% 1000000000;
            }
            else if(j==9){
                D[i][j] = D[i - 1][j - 1]% 1000000000;
            }
            else {
                D[i][j] = (D[i - 1][j - 1] + D[i - 1][j + 1])% 1000000000;
            }
        }
    }

    long long sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += D[n][i]% 1000000000;
    }
    cout << sum % 1000000000 << "\n";

}