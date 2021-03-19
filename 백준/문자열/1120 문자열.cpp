#include <iostream>
#include <string>

using namespace std;

string A;
string B;

int main(){
    cin >> A >> B;
    
    int differ = int(B.size() - A.size());
    int min = 1234567;
    
    for(int i=0; i<differ+1; i++){ //한칸씩 이동하면서 최소값 구한다.
        
        int dif=0;
        for(int j=i, k=0; j<i+int(A.size()); j++,k++){
            if(B[j] != A[k])dif++;
        }
        if(min > dif)min = dif;
    }
    
    cout << min;
}
