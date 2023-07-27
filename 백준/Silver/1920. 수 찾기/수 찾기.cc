#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,m;
void binarysearch(int k, vector<int>&A){
    int low=0;
    int high = n-1;
    while(low<=high){
        int mid = (low + high) / 2;
        if(k>A[mid]){
            low = mid + 1;
        }
        else if(k<A[mid]){
            high = mid - 1;
        }
        else{
            cout << 1 << "\n";
            return;
        }
    }
    cout << 0 << "\n";
    return;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vector<int> A(n);
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    cin >> m;
    for(int i=0;i<m;i++){
        int k;
        cin >> k;
        binarysearch(k,A);
    }
    return 0;
}