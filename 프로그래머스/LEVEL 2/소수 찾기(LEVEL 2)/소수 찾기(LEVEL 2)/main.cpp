//
//  main.cpp
//  소수 찾기(LEVEL 2)
//
//  Created by Sang Ho Yoo on 2020/10/10.
//

#include <iostream>
#include <string>

using namespace std;

#define max 10000001

int box[100];

void find_sosu(){ //에라토스테네스의 체
    for(int i=0; i<max; i++)box[i] = i;
    
    for(int i=2; i<=max; i++){
        if(box[i]==0) continue;
        
        for(int j=i+i ; j<=max; j+=i){
            box[j] = 0; //소수가 아닌걸 체크한다.
        }
    }
}

int main(int argc, const char * argv[]) {
    
    string numbers = "17";
    int answer = 0;
    
    find_sosu(); //소수 구하기
    
    
    
    for(int i=2; i<=max; i++){ //전체 배열 중에 해당하는 소수 찾는다.
        if(box[i]==0)continue; //소수 아닌 곳은 볼 필요 없다.
        
        char compare[8]; // numbers 배열 복사할 배열
        for(int j=0; j<numbers.size(); j++){
            compare[j] = numbers[j]; //배열 복사.
        }

        int a = i; //현재 소수 값
        int count = 0, num_count=0;
            
        while(a!=0){ //찾는 부분
            int num = a%10;
            
            for(int d = 0; d<numbers.size(); d++){
                if(compare[d]!=-1 && num == (compare[d]-'0')){ //같은 값을 찾았다.
                    compare[d] = -1; //찾은 값이다.
                    count++;
                    break;
                }
            }
            a /= 10;
            num_count++;
        }
        
        if(count == num_count)answer++;
    }
    
    cout << answer <<'\n';
}
