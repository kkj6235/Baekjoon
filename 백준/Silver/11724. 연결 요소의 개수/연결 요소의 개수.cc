#include <iostream>
#include<vector>
#include<algorithm>
#include <numeric>
#include<queue>
using namespace std;

vector<queue<int>> S(1001);
vector<bool> isVisit(1001, false);
void mysearch(int i){

    if(isVisit[i]){
        return ;
    }
    isVisit[i] = true;

    while(!S[i].empty()){
        auto tmp=S[i].front();
        S[i].pop();
//        S[tmp].pop();
        mysearch(tmp);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int node,edge,count=0;

    cin>>node>>edge;

    for(int i=0;i<edge;i++){
        int start, end;
        cin >> start >> end;
        S[start].push(end);
        S[end].push(start);
    }

    for(int i=1;i<=node;i++){
        if(!isVisit[i]){
            count++;
            mysearch(i);
        }
    }


    cout << count << "\n";
}

