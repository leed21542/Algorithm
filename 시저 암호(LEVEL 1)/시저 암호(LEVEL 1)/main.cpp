//
//  main.cpp
//  시저 암호(LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/26.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int n = 4;
    char ad = NULL;
    string s = "a B z";
    string answer = "";
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 32){
            answer.append(" ");
            continue;
        }
        if(s[i]+n > 90 && s[i]>=65 && s[i]<=90) //대문자 인데 Z 넘어가면
        {
            ad = 64+(s[i]+n - 90);
            answer.push_back(ad);
            continue;
        }
        else if(s[i]+n > 122 && s[i]>=97 && s[i]<=122)
        {
            ad = 96+(s[i]+n - 122);
            answer.push_back(ad);
            continue;
        }
        answer.push_back(s[i]+n);
    }
    
}
