//
//  main.cpp
//  정수 내림차순으로 배치하기(LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/26.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    long long n = 118372;
    long long answer = 0;
    
    
    string s = to_string(n); //string으로 바꾼다.
    sort(s.begin(), s.end(), greater<>()); //내림차순으로 정렬
    answer = stoll(s);
    
}
