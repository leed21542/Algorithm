//
//  main.cpp
//  가운데 글자 가져오기 (LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/23.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

string s = {"qwer"};
string answer;

int main() {
    int a = s.size();
    if(a%2 == 0) //짝수일 때
    {
        answer.push_back(s[s.size()/2-1]);
        answer.push_back(s[s.size()/2]);
    }
    else{
        answer.push_back(s[s.size()/2]);
    }
}
