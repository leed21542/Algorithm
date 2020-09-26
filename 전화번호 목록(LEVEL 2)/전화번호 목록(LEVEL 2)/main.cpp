//
//  main.cpp
//  전화번호 목록(LEVEL 2)
//
//  Created by Sang Ho Yoo on 2020/09/18.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

bool answer;
vector<string> phone_book = {"119","97674223","1195524421"};

int main() {
    int i = 0;
    for(i=0; i<phone_book.size(); i++) //맨 앞부터 제일 뒤에꺼까지 하나씩 체크
    {
        for(int j=0; j<phone_book.size(); j++)
        {
            if(phone_book[i] == phone_book[j])continue; //두개가 같으면 넘어간다.
            
            if(phone_book[j] < phone_book[i]) //비교하는 값의 길이가 비교당하는 값의 길이보다 짧아야한다.
            {
                if(phone_book[j] == phone_book[i].substr(0,phone_book[j].size())) //접두사가 같으면 false 리턴
                {
                    answer = false;
                    return answer;
                }
            }
        }
    }
    if(i == phone_book.size())
    {
        answer = true;
        return answer;
    }
}
