//
//  main.cpp
//  문자열 다루기 기본(LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/25.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

string s = "a234";

int main(int argc, const char * argv[]) {
    bool answer = true;
    if(s.size()==4 || s.size()==6){
        for(int i=0;i<s.size();i++)
            if(s[i]<48 || s[i]>57){
                answer=false;
                break;
            }
    }
    else answer=false;
}
