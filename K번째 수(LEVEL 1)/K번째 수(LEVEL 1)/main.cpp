//
//  main.cpp
//  K번째 수(LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/18.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> ar = {1,5,2,6,3,7,4};
vector<vector<int>> commands = {{2,5,3},{4,4,1},{1,7,3}};
vector<int> answer;

int main() {
    
    for(int i=0; i<commands.size(); i++) //커맨드에서 하나하나씩 진행한다.
    {
        vector<int> result; //커맨드 결과 담을 배열
        for(int j=commands[i][0]-1; j<=commands[i][1]-1; j++) //커맨드 1에서부터 2까지 진행
        {
            result.push_back(ar[j]); //범위의 수를 넣는다.
        }
        
        sort(result.begin(),result.end()); //소팅
        answer.push_back(result[commands[i][2]-1]); //몇번째 수를 결과 배열에 넣는다.
    }
}
