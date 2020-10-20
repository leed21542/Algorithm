#include <iostream>
#include <vector>
#include <memory.h>
#include <algorithm>

using namespace std;
vector<int> inp;
int cache[2001][2001];
int S,E; //S-1부터 E-1까지
int result = 0;
vector<int> res;

int play(int start, int end){
    
    if(start >= end)return 1;
    
    int& ret = cache[start-1][end-1];
    
    if(ret!=-1)return ret;
    
    if(inp[start-1] == inp[end-1]){
        return ret = play(start+1,end-1);
    }
    else return 0;
}


int main(){
    
    int total = 0;
    int M=0;
    string input;
    scanf("%d",&total);
    
    for(int i=0; i<total; i++){
        int num;
        scanf("%d",&num);
        inp.push_back(num);
    }
    
    memset(cache, -1, sizeof(cache));
    scanf("%d",&M);
    
    
    for(int i=0; i<M; i++){
        scanf("%d %d",&S, &E);
        res.push_back(play(S,E));
    }
    
    for(int i=0; i<res.size(); i++)printf("%d\n",res[i]);
}
