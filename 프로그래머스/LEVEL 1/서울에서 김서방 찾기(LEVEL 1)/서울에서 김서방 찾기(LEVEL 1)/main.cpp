//
//  main.cpp
//  서울에서 김서방 찾기(LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/25.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> seoul = {"Jane","Kim"};

int main(int argc, const char * argv[]) {
    
    int point = 0;
    for(int i=0; i<seoul.size(); i++)
    {
        if(seoul[i] == "Kim")
        {
            point = i;
            break;
        }
    }
    string answer = "김서방은 "+to_string(point)+"에 있다";
    
}
