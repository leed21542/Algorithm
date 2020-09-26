//
//  main.cpp
//  수박수박수박수박수박수? (LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/26.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n = 3;
    string answer= "";
    
    for(int i=1; i<=n; i++)
    {
        if(i%2 == 0) //짝수다 -> 박 추가
        {
            answer.append("박");
        }
        else answer.append("수");
    }
}
