#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> numbers = {0, 6, 10, 2};

typedef struct{
    int origin; //원래 값
    int change_num; //바꾼 값
} change;

bool com(change A, change B){
    return A.change_num > B.change_num;
}

int main(int argc, const char * argv[]) {
    vector<change> C(numbers.size()); //새로운 배열 만든다.
    
    int zero_count=0;
    change A;
    
    for(int i=0; i<numbers.size(); i++) //전부 자릿수 같게 만든다.
    {
        if(numbers[i]==0)zero_count++;
        string B = to_string(numbers[i]); //문자열로 바꾼다.
        string chan = "";
        int c = 0;
        
        while(1){
            if(chan.size() == 4)break;
            chan.push_back(B[c]);
            c++;
            if(c == B.size())c = 0;
        }
        A.origin = numbers[i];
        A.change_num = stoi(chan);
        C[i] = A;
    }
    
    sort(C.begin(),C.end(),com);
    string answer;
    
    if(zero_count == numbers.size())answer = to_string(0);
    for(int i=0; i<C.size(); i++){
        answer.append(to_string(C[i].origin));
    }
    
    cout << answer << '\n';
}

