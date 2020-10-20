#include <iostream>
#include <stack>
#include <string>

using namespace std;

int total=0;
int result = 0;

void check(string B){
    int box[50]={0,};
    bool semi_result = false;
    char start = B.front(); //제일 먼저 받는다.
    
    for(int i=0; i<B.size(); i++){
        if(B[i] != start){
            int index = start - 'a';
            if(box[index] != 0){
                semi_result = true; //한번 봣는데 또 나오면 떨어진거 -> 답 안된다.
                return;
            }
            else{
                box[index] = 1;
                start = B[i];
            }
        }
        
        if(i == B.size()-1){ //마지막일 때
            int index = B[i] - 'a';
            if(box[index]!=0)return;
        }
    }
    if(!semi_result)result++;
    
}

int main(){
    
    cin >> total;
    
    for(int i=0; i<total; i++){
        string A;
        cin >> A;
        check(A);
    }
    
    cout << result;
}
