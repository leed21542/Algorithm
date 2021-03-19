//
//  main.cpp
//  단어의 개수
//
//  Created by Sang Ho Yoo on 2020/10/14.
//

#include <iostream>
#include <string>
using namespace std;

string sentence;
int answer;
bool before_char = false;

int main(int argc, const char * argv[]) {
    getline(cin,sentence);
    
    for(int i=0; i<sentence.size(); i++){ //한 문자가 끝나고 현재 공백이면 한 단어가 끝난 걸로 취급
        if(sentence[i] == ' '){
            before_char = false;
            continue;
        }
        
        if(sentence[i] != ' ' && !before_char){ //문자일때
            answer++;
            before_char = true;
        }
    }
    
    cout << answer;
}
