//
//  main.cpp
//  큰 수의 법칙
//
//  Created by Sang Ho Yoo on 2020/09/28.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int N=0, M=0, K=0;
    int answer = 0;
    
    cin >> N >> M >> K;
    vector<int> box(N);
    
    for(int i=0; i<N; i++)
    {
        cin >> box[i];
    }
    
    sort(box.begin(), box.end(), greater<>()); //내림차순
    int max = 0;
    int pointer = 0; //box 배열 내부 가르킬 배열
    
    for(int i=0; i<M; i++)
    {
        if(pointer == 0){
            for(int j=0; j<K; j++){
                answer += box[pointer];} //제일 큰 값은 무조건 3번 한다.
                i+=2;
                max = box[pointer];
                pointer++;
                continue;
        }
        if(box[pointer] < max){ //제일 큰 값 보다 작으면 한번만 수행
            answer+=box[pointer];
            pointer = 0; //맨 처음 값 다시 더하러 간다.
        }
        else if(box[i] >= max){
            for(int j=0; j<K; j++)
            {
                answer+=box[i];
                i+=2;
                pointer = 0;
            }
        }
    }
    cout << answer;
    
}
