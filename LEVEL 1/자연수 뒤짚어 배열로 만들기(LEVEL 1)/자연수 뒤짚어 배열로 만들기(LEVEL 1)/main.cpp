//
//  main.cpp
//  자연수 뒤짚어 배열로 만들기(LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/26.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    long long n  = 12345;
    vector<int> answer;

    string s = to_string(n);
    reverse(s.begin(), s.end());
    for(int i=0; i<s.size(); i++)answer.push_back(s[i]-'0');
}
