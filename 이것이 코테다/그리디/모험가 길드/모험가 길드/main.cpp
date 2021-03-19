//
//  main.cpp
//  모험가 길드
//
//  Created by Sang Ho Yoo on 2020/09/28.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int total = 0;
int answer = 0;


int main(int argc, const char * argv[]) {
    
    cin >> total;
    
    vector<int> group(total); //total만큼의 벡터 만든다.
    for(int i=0; i<total; i++)cin >> group[i];
    
    sort(group.begin(), group.end()); //오름차순 정렬
    
    int count = 0;
    for(int i=0; i<group.size(); i++)
    {
        count++;
        if(count >= group[i]) //사람이 다 찼으니 모험을 보낸다.
        {
            answer++;
            count = 0;
        }
    }
    
    cout << answer;
    
}
