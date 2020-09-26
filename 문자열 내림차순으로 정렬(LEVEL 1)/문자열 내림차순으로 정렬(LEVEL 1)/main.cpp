//
//  main.cpp
//  문자열 내림차순으로 정렬(LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/24.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>

bool desc(char a,char b){
    return a > b;
}
using namespace std;
string s = "Zbcdefg";
int main(int argc, const char * argv[]) {
    sort(s.begin(),s.end(),desc);
    
}
