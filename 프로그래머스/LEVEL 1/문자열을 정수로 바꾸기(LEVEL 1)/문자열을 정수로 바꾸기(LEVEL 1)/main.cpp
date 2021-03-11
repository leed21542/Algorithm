//
//  main.cpp
//  문자열을 정수로 바꾸기(LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/26.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string s = {"-1234"};
    int answer = stoi(s);
    printf("%d",answer);
}
