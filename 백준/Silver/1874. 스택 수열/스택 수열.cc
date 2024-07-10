#include <iostream>
#include<vector>
#include<stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> S(n, 0);
    vector<char> result;
    stack<int> mystack;
    for (int i = 0; i <n; i++) {
        cin >> S[i];
    }
    int i = 0, j = 1;
    while (i < n) {
        if (!mystack.empty()) {
            if(mystack.top() == S[i]){
                result.push_back('-');
                mystack.pop();
                i++;
            }
            else if(mystack.top() > S[i]){
                result.clear();
                cout << "NO" << "\n";
                break;
            }
            else{
                goto Else;
            }
        }
        else{
            Else:
            mystack.push(j);
            result.push_back('+');
            j++;
        }
    }
    for (int k = 0; k < result.size(); k++) {
        cout << result[k] << "\n";
    }
}

