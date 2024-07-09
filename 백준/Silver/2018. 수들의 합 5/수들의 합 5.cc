#include <iostream>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,count=1;
    cin >> n;
    int start=1,end=1;
    int sum=1;
    while(end!=n){
        if(sum<n){
            end++;
            sum+=end;
        }
        else if(sum>n){
            sum-=start;
            start++;
        }
        else{
            count++;
            end++;
            sum += end;
        }
    }
    cout << count << "\n";
}
