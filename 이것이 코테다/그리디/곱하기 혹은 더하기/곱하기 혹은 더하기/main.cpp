//
//  main.cpp
//  곱하기 혹은 더하기
//
//  Created by Sang Ho Yoo on 2020/09/28.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string in = "";
int answer = 0;

int main(int argc, const char * argv[]) {
    
    cin >> in;
    
    for(int i=0; i<in.size(); i++) //0 만나면 무조건 더하기, 아니면 곱하기
    {
        int num = in[i] - '0';
        if(i==0){answer = in[i] - '0'; continue;} //첫 값은 먼저 넣는다.
        if(answer <= 1 || num <= 1) //두 수중 하나라도 1 이하이면
        {
            answer += num;
        }
        else{
            answer *= num;
        }
    }
    
    cout << answer;
}
