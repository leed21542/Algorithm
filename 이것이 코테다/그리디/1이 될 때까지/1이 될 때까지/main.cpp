//
//  main.cpp
//  1이 될 때까지
//
//  Created by Sang Ho Yoo on 2020/09/28.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int num1 = 0, num2 = 0;
int answer = 0;

int main(int argc, const char * argv[]) {
    
    cin >> num1 >> num2;
    while(num1!=1){
        if(num1 % num2 == 0) //나누어 떨어진다.
        {
            num1 /= num2;
            answer++;
        }
        else{
            num1 -= num2;
            answer++;
        }
    }
    cout << answer;
}
