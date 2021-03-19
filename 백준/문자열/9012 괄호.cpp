#include <iostream>
#include <stack>
#include <string>

using namespace std;

int total=0;

void S(string A){
    int result = 0;
    stack<char> box;
    
    for(int i=0; i<A.size(); i++){
        if(A[i] == '(')box.push(A[i]);
        else{
            if(box.empty()){result = 1;break;}
            box.pop();
        }
    }
    if(result == 1)cout << "NO" << '\n';
    else if(box.empty())cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main(){
    
    cin >> total;
    
    for(int i=0; i<total; i++){
        string sentence;
        cin >> sentence;
        S(sentence); //연산 실행
    }
}
