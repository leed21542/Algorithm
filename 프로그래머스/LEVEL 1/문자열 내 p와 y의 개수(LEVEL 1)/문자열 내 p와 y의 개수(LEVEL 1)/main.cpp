//
//  main.cpp
//  문자열 내 p와 y의 개수(LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/25.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string a = "pPoooyY";
    int p_count=0, y_count=0;
    bool answer = true;
    
    for(int i=0; i<a.size(); i++)
    {
        if(a[i] == 112 || a[i] == 80) //소문자 p이거나 대문자 p이다
        {
            p_count++;
        }
        else if(a[i] == 121 || a[i] == 89)
        {
            y_count++;
        }
    }
    if(p_count == y_count)answer = true;
    else if(p_count==0 && y_count==0)answer = true;
    else answer=false;
}
