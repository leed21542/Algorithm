#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

int total;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> total;
    
    stack<int> S;
    
    while (total--) {
        int num;
        cin >> num;
        
        if(num == 0)S.pop();
        else S.push(num);
    }
    
    if(S.empty())cout << 0 << '\n';
    else{
        int sum = 0;
        while(!S.empty()){
            sum += S.top();
            S.pop();
        }
        cout << sum << '\n';
    }
}
