#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N, len, result;
string S;
string com; //비교용 배열

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    cin >> len;
    cin >> S;
    int count = 0;
    int Flag = 0;
    
    
    for(int i=0; i<S.size(); i++){
        if(S[i] == 'I' && S[i+1] == 'O' && S[i+2] == 'I'){ //I가 나오면 비교해야한다.
            i+=1;
            count++;
        }
        else{
            count = 0;
        }
        
        if(count >= N){
            result++;
        }
    }
    
    cout << result <<'\n';
}
