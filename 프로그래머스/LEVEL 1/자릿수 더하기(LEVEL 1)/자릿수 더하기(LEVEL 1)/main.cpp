//
//  main.cpp
//  자릿수 더하기(LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/26.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int n = 123;
    int answer = 0;
    
    string A = to_string(n);
    for(int i=0; i<A.size(); i++)
    {
        answer += (A[i]-48);
    }
}
