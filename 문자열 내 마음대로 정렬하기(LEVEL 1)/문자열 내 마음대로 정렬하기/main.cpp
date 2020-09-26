#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> strings = {"sun","bed","car"};
vector<string> answer;
int N=1;

bool compare(string a, string b){
    if(a.at(N) != b.at(N)){
        return a.at(N) < b.at(N);
    }else{
        return a < b; //사전순으로 정렬
    }
}

int main(int argc, const char * argv[]) {
    answer = strings;
    int n = 1;
    N = n;
    sort(answer.begin(), answer.end(), compare);
}
