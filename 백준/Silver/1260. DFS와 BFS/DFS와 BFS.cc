#include <iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

vector<vector<int>> S;
vector<bool> isVisit;
void DFS(int i){

    if(isVisit[i]){
        return ;
    }
    isVisit[i] = true;
    cout << i << " ";

    for(auto it=S[i].begin();it<S[i].end();it++){
        if(!isVisit[*it]){
            DFS(*it);
        }
    }

}
void BFS(int start){
    queue<int> myqueue;
    if(!isVisit[start]){
        isVisit[start] = true;
        myqueue.push(start);
    }


    while(!myqueue.empty()){
        int now = myqueue.front();
        myqueue.pop();
        cout << now << " ";
        for(auto it=S[now].begin();it<S[now].end();it++){
            if(!isVisit[*it]){
                isVisit[*it] = true;
                myqueue.push(*it);
            }
        }

    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int node, edge, start;

    cin >> node >> edge >> start;
    S.resize(node + 1);
    isVisit.resize(node + 1);
    fill(isVisit.begin(), isVisit.end(), false);
    for (int i = 0; i < edge; i++) {
        int start, end;
        cin >> start >> end;
        S[start].push_back(end);
        S[end].push_back(start);
    }
    for(int i=1;i<=node;i++){
        sort(S[i].begin(), S[i].end());
    }
    DFS(start);
    cout << "\n";
    fill(isVisit.begin(), isVisit.end(), false);
    BFS(start);
}

