//
//  main.cpp
//  나누어 떨어지는 숫자 배열(LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/24.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr = {5,9,7,10};
vector<int> answer;
int divisor = 5;

int main(int argc, const char * argv[]) {
    
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]%divisor == 0)answer.push_back(arr[i]);
    }
    if(answer.empty())answer.push_back(-1);
    sort(answer.begin(),answer.end());
}
