#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int box[9];
    
    for(int i=0; i<9; i++)cin >> box[i];

    int first=0, second=0;
    
    sort(box, box+9);
    
    for(int i=0; i<8; i++){
        int sum = 0;
        int j = i+1;
        for(; j<9; j++){
            for(int d=0; d<9; d++){
                if(d == i || d == j)continue;
                sum += box[d];
            }
            if(sum == 100){
                first = i;
                second = j;
                break;
            }
            sum = 0;
        }
    }
    
    for(int i=0; i<9; i++){
        if(i == first || i == second)continue;
        cout << box[i] <<'\n';
    }
    
}
