//
//  main.cpp
//  소수 찾기(LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/25.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int n = 5;

int main(int argc, const char * argv[]) {
    int answer = 0;
    vector<int> box(n+1);
    for(int i=2; i<=n; i++)//미리 각자의 수로 채워준다.
    {
        box[i] = i;
    }
    
    for(int i=2; i<=n; i++)
    {
        if(box[i] == 0)continue;
        
        for(int j=2*i; j<=n; j+=i)
        {
            box[j] = 0; //각각의 배수는 소수가 아니다.
        }
    }
    for(int i=0; i<=n; i++)
    {
        if(box[i]!=0)answer++;
    }

    printf("%d",answer);
}
