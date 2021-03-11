//
//  main.cpp
//  기능개발(LEVEL 2)
//
//  Created by Sang Ho Yoo on 2020/09/27.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> progresses = {95, 90, 99, 99, 80, 99};
vector<int> speeds = {1, 1, 1, 1, 1, 1};
vector<int> answer;
int main(int argc, const char * argv[]) {
    
    int day = 1; //지난 날짜 수
    int solo = 0;
    for(int i=0; i<progresses.size(); i++) //하나하나씩 본다.
    {
        if(progresses[i] + speeds[i]*day >= 100) //하루만에 완료 가능
        {
            solo++;
            if(i == progresses.size()-1)
            {
                answer.push_back(solo);
            }
            continue;
        }
        else{ //현재 날짜로 계산 안된다.
            if(i!=0)answer.push_back(solo);
            solo = 0;
            float check_day = 100 - progresses[i]; // 며칠 필요한지 먼저 계산
            day = ceil(check_day/speeds[i]); //올림해서 며칠 쓰는지 계산.
            if(i == progresses.size()-1) //만약 마지막이라면
            {
                answer.push_back(1);
            }
            solo++;
        }
    }
}
