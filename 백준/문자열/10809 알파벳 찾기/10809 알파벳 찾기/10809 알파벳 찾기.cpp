//
//  main.cpp
//  10809 알파벳 찾기
//
//  Created by Sang Ho Yoo on 2020/10/20.
//

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int box[26];
string A;

int main(int argc, const char * argv[]) {
   
    cin >> A;
    memset(box, -1, sizeof(box));
    
    for(int i=0; i<A.size(); i++){
        int index = A[i] - 'a';
        if(box[index]==-1){
            box[index] = i;
        }
    }
    
    for(int i=0; i<26; i++)cout << box[i] << " ";
}
