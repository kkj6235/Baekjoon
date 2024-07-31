#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int tmp=x;
    while(answer.size()<n){
        answer.push_back(tmp);
        tmp+=x;
    }
    return answer;
}