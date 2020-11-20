#include <iostream>
#include <algorithm>

using namespace std;


int total;
int result;
char box[51][51];

int cal(){
    
    int cal_result = 0;
    for(int i=0; i<total; i++){
        int temp = 1;
        for(int j=1; j<total; j++){
            
            if(box[i][j-1] == box[i][j])temp++;
            else {
                cal_result = max(cal_result,temp);
                temp = 1;
            }
        }
        cal_result = max(cal_result,temp);
    }
    
    for(int i=0; i<total; i++){
        int temp = 1;
        for(int j=0; j<total; j++){
            
            if(box[j-1][i] == box[j][i])temp++;
            else {
                cal_result = max(cal_result,temp);
                temp = 1;
            }
        }
        cal_result = max(cal_result,temp);
    }
    
    return cal_result;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> total;
    
    for(int i=0; i<total; i++){
        for(int j=0; j<total; j++){
            cin >> box[i][j];
        }
    }
    
    for(int i=0; i<total; i++){
        for(int j=0; j<total-1; j++){
            
            //가로 스왑
            swap(box[i][j],box[i][j+1]);
            result = max(result,cal());
            swap(box[i][j],box[i][j+1]);
            
            if(i == total-1)continue;
            //세로 스왑
            swap(box[i][j],box[i+1][j]);
            result = max(result,cal());
            swap(box[i][j],box[i+1][j]);
        }
    }
    
    cout << result <<endl;
}
