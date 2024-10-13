#include <iostream>
#include<vector>
#include<algorithm>


using namespace std;

vector<vector<int>> D;
vector<bool> visited;
bool flag=false;

void DFS(int from,int depth){

    if(flag){
        return ;
    }
    if(visited[from]){
        return ;
    }
    visited[from] = true;
    if(depth==4){
//        cout << "flag switch" << "\n";
//        cout << from  <<" "<<depth<< "\n";

        flag = true;
        return ;
    }

    for(auto it=D[from].begin();it!=D[from].end();it++){
//        cout << from << " " << *it <<" "<<depth<< "\n";
        DFS(*it,depth+1);
    }
    visited[from]=false;

}
int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin >> n >> m;

    D.resize(n);
    visited.resize(n, false);

    for(int i=0;i<m;i++){

        int from,to;
        cin >> from >> to;
        if(from!=to){
            D[from].push_back(to);
            D[to].push_back(from);
        }
    }


    for(int i=0;i<n;i++){
        if(!visited[i]){
            DFS(i,0);
            visited[i]=false;
        }
    }

    if(flag){
        cout << 1 << "\n";
    }
    else{
        cout << 0 << "\n";
    }
}
