//
//  main.cpp
//  백준 문제풀이
//
//  Created by Sang Ho Yoo on 2020/10/20.
//

#include <iostream>
#include <string>

using namespace std;

int box[26];
string A;

int main(int argc, const char * argv[]) {
    
    bool result = false;
    cin >> A;
    
    for(int i=0; i<A.size(); i++){
        if(islower(A[i])){ //소문자 이면 대문자로 고쳐서 index 증가
            int index = A[i] - 'a';
            box[index]++;
        }
        else{
            int index = A[i] - 'A';
            box[index]++;
        }
    }
    
    int max = 0, max_index=0;
    for(int i=0; i<sizeof(box)/sizeof(int); i++){
        if(box[i] > max){
            max = box[i];
            max_index = i;
        }
    }
    
    for(int i=0; i<sizeof(box)/sizeof(int); i++){
        if(max == box[i] && max_index!=i){
            result = true;
            break;
        }
    }
    
    if(result)cout << '?';
    else cout << char(max_index + 65);
    
}
