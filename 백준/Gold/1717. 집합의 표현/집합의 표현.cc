#include <iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<set>
using namespace std;
vector<int> parent;
int find(int k){
    if(parent[k]!=k){
        return parent[k]=find(parent[k]);
    }
    else{
        return k;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    parent.resize(n + 1);

    for(int i=0;i<=n;i++){
        parent[i] = i;
    }
    for(int i=0;i<m;i++){
        int search, a, b;
        cin >> search >> a >> b;
        if(search==0){
            int x,y;
            x = find(a);
            y = find(b);
            if(y!=x){
                parent[y] = x;
            }

        }
        else{
            // 검색
            if(find(a)==find(b)){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";

            }

        }
    }

}

