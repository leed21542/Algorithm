//
//  main.cpp
//  2884번: 알람 시계
//
//  Created by Sang Ho Yoo on 2020/10/14.
//

#include <iostream>
using namespace std;

int H, M;

int main(int argc, const char * argv[]) {
    
    cin >> H >> M;
    
    if(M - 45 < 0){
        M += 15;
        if(H == 0){
            H = 23;
        }
        else H -= 1;
    }
    else{
        M -= 45;
    }
    
    cout << H << " " << M << '\n';
}
