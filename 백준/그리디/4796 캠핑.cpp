#include <iostream>
#include <algorithm>

using namespace std;

int L,P,V;
int num = 1;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    while(1){
        cin >> L >> P >> V;
        if(L == 0 && P == 0 && V == 0)break;
        
        int result = 0;
        
        while(V >= P){
            V -= P;
            result += L;
        }
        
        if(V > L)result += L;
        else result += V;
        
        cout << "Case " << num <<": " << result <<endl;
        num++;
        
    }
}
