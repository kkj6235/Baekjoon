#include <iostream>
#include<vector>
using namespace std;
int len,max_len,count=0,finish_cnt=0;
vector<int> min_str(4);
vector<int> count_str(4, 0);
int idx;
void add(char s);
void remove(char s);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> len >> max_len;
    char *str = new char[len+1];
    cin >> str;

    for(int i=0;i<4;i++){
        cin >> min_str[i];
        if(min_str[i]==0){
            finish_cnt++;
        }
    }

    int start = 0, end = max_len - 1;

    idx=start;

    while(idx<=end){
        add(str[idx]);
        idx++;
    }

    while(end!=len){
        if(finish_cnt==4){
            count++;
        }
        remove(str[start]);
        start++;
        end++;
        if(end!=len){
            add(str[end]);
        }
    }

    cout << count << "\n";

}

void add(char s) {
    if(s == 'A'){
        count_str[0]++;
        if(count_str[0]==min_str[0]){
            finish_cnt++;
        }
    }
    else if(s == 'C'){
        count_str[1]++;
        if(count_str[1]==min_str[1]){
            finish_cnt++;
        }
    }
    else if(s == 'G'){
        count_str[2]++;
        if(count_str[2]==min_str[2]){
            finish_cnt++;
        }
    }
    else if(s == 'T'){
        count_str[3]++;
        if(count_str[3]==min_str[3]){
            finish_cnt++;
        }
    }
}
void remove(char s) {
    if(s == 'A'){
        if(count_str[0]==min_str[0]){
            finish_cnt--;
        }
        count_str[0]--;
    }
    else if(s == 'C'){
        if(count_str[1]==min_str[1]){
            finish_cnt--;
        }
        count_str[1]--;
    }
    else if(s == 'G'){
        if(count_str[2]==min_str[2]){
            finish_cnt--;
        }
        count_str[2]--;
    }
    else if(s == 'T'){
        if(count_str[3]==min_str[3]){
            finish_cnt--;
        }
        count_str[3]--;
    }
}