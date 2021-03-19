#include <iostream>

using namespace std;

int main(){
    int N;
    int result;
    
    cin >> N;
    
    if(N < 100) cout << N;
    else if(N == 1000) cout << 144;
    else{
        result = 99;
        for(int i=100; i<=N; i++){
            
            string A = to_string(i);
            int differ=A[2] - A[1];
            int before_differ=A[1] - A[0];
            if(differ == before_differ)result++;
        }
        
        cout << result;
    }
}
