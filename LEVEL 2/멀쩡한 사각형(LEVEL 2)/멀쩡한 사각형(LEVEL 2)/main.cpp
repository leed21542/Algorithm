//
//  main.cpp
//  멀쩡한 사각형(LEVEL 2)
//
//  Created by Sang Ho Yoo on 2020/09/27.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a,int b) //최대공약수 구하는 법
{
    if(b == 0)return a;
    else{
        return gcd(b,a%b);
    }
}

int main(int argc, const char * argv[]) {
    int w = 8;
    int h = 12;
    long long answer = 1;
    int chae = 0;
    
    if(w > h){ //최대공약수를 구한다.
        chae = gcd(w,h);
    }else{
        chae = gcd(h,w);
    }
    
    if(chae==1)answer = w * h - (w + h + 1);
    else answer = w * h - (w + h + chae);
    
}
