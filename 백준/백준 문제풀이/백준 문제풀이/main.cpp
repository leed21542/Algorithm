#include <iostream>
#include <algorithm>

using namespace std;

int box[101][5];
int total = 0;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    
    
    cin >> total;
    
    for(int i=0; i<total; i++){
        int a, b, c;
        
        cin >> a >> b >> c ;
        
        int count = 2;
        while(a!=0){ //한자리씩 넣기
            int c = a%10;
            box[i][count--] = c;
            a/=10;
        }
        box[i][3] = b;
        box[i][4] = c;
    }
    

    int result_count = 0;
 
    for(int z=1; z<=9; z++){
        for(int j=1; j<=9; j++){
            for(int d=1; d<=9; d++){
                if(z == j || z == d || j == d)continue;
                
                bool flag = false;
                for(int v = 0; v<total; v++){ //저장된 배열을 하나씩 둘러보며 스트라이크와 볼 판단
                    //스트라이크 먼저 판단.
                    int strike = 0;
                    int ball = 0;
                    
                    if(z == box[v][0])strike++;
                    if(j == box[v][1])strike++;
                    if(d == box[v][2])strike++;
                    
                    if(strike != box[v][3]){
                        flag = true;
                        break;
                    }
                    
                    if(z == box[v][1] || z == box[v][2])ball++;
                    if(j == box[v][0] || j == box[v][2])ball++;
                    if(d == box[v][0] || d == box[v][1])ball++;
                    
                    if(ball != box[v][4]){
                        flag = true;
                        break;
                    }
                }
                
                if(!flag)result_count++; //만약
            }
        }
    }
    
    cout << result_count <<endl;
}
