#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    int N;
    int result = 0;
    cin >> N;
    
    for(int i=1; i<=N; i++){
        int num = i;
        int sum = 0;
        
        while(num != 0){ //각 자리수 더한다.
            sum += num%10;
            num /= 10;
        }
        
        if((sum+i) == N){
            cout << i;
            result = 1;
            break;
        }
    }
    
    if(result == 0)cout << 0;
}
