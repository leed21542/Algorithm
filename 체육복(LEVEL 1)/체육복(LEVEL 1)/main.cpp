//
//  main.cpp
//  체육복(LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/18.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n = 6;
vector<int> lost = {5,6};
vector<int> reserve = {4,5};
int answer = 0;
int check = 0;

int main() {
    
    sort(lost.begin(),lost.end());
    sort(reserve.begin(),reserve.end());
    
    for(int i=0; i<lost.size(); i++) //서로 같은거 지운다.
    {
        for(int j=0; j<reserve.size(); j++)
        {
            if(lost[i] == reserve[j])
            {
                lost.erase(lost.begin()+i);
                reserve.erase(reserve.begin()+j);
                i--;
                j--;
                break;
            }
        }
    }
    
    for(int i=0; i<n; i++) //전체 학생 수 만큼 돌린다.
    {
        if(lost.front() == i+1) //잃어버린 학생이 있다.
        {
            int j = 0;
            int check = reserve.size();
            for(j=0; j<reserve.size(); j++)
            {
                if(reserve[j] == lost.front()+1) //왼쪽으로 먼저 줄 수 있는지 본다.
                {
                    lost.erase(lost.begin());
                    reserve.erase(reserve.begin()+j);
                    answer++;
                    break;
                }
                else if(reserve[j] == lost.front()-1){//오른쪽으로 줄 수 있는지 본다.
                    lost.erase(lost.begin());
                    reserve.erase(reserve.begin()+j);
                    answer++;
                    break;
                }
            }
            if(j == check)lost.erase(lost.begin()); //다 안된다면 삭제
        }
        else{
            answer++;
        }
    }
    printf("%d",answer);
}
