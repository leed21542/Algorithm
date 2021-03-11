//
//  main.cpp
//  이상한 문자 만들기(LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/26.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string s = "Try hello world";
    string answer = "";
    int count = 0;
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == ' '){
            count = 0; //각 문자별 홀짝 판별
            answer.push_back(s[i]);
            continue;
        }
        if(count%2 == 0){
            answer.push_back(toupper(s[i]));
            count++;
        }
        else{
            answer.push_back(tolower(s[i]));
            count++;
        }
    }
    cout << answer;
}
