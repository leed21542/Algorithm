//
//  main.cpp
//  두 개 뽑아서 더하기 (LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/23.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int check[1000] = {0,};
vector<int> numbers = {5,0,2,7};
vector<int> answer;

int main() {
    for(int i=0; i<numbers.size(); i++)
    {
        for(int j=0; j<numbers.size(); j++)
        {
            if(i == j)continue; //두개 같은 인덱스면 넘어간다.
            int pl = numbers[i] + numbers[j]; //다른 인덱스의 두 값을 더한다.
            if(check[pl]==0) //아직 같은 결과가 안나왔을때 결과값에 추가
            {
                answer.push_back(pl);
                check[pl] = 1;
            }
        }
    }
    sort(answer.begin(),answer.end());
    
    for(int i=0; i<answer.size(); i++)printf("%d ",answer[i]);
}
