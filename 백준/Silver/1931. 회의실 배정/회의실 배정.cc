#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(const pair<int,int>& a, const pair<int,int>& b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}
int main() {

    int tmp,count=0;
    cin>>tmp;
    vector<pair<int,int>> vec;
    for(int i=0;i<tmp;i++){
        int a,b;
        cin >> a >> b;
        vec.emplace_back(a, b);
    }
    sort(vec.begin(), vec.end(), cmp);

    pair<int,int> bef=make_pair(0,0);
    for(auto iter:vec){
        if(bef.second<=iter.first){
            bef=iter; // bef=3 최근 것만 기억!!
            count++;
        }
    }
    cout << count << endl;
    return 0;
}


